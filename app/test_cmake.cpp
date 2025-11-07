# include <iostream>
# include <fstream>

# include <cxxopts.hpp>
# include <fmt/format.h>
# include <range/v3/view.hpp>

# include "person.h"
# include "json.h"

namespace view = ranges::views;

int fib(int x)
{
	int a = 0, b = 1;

	for (int it : view::repeat(0) | view::take(x))
	{
		(void)it;
		int tmp = a;
		a += b;
		b = tmp;
	}

	return a;
}

int main(int argc, char **argv) {
	person::Person person_a("Alice");
	person::Person person_b("Bob");

	person_a.greet();
	person_b.greet();

	Json::Value root;

	cxxopts::Options options("fibo", "Print the fibonacci sequence up to a given number");

	options.add_options()("number", "The number to print to", cxxopts::value<int>()->default_value("10"));

	auto args = options.parse(argc, argv);

	for (int x: view::iota(1) | view::take(args["number"].as<int>()))
	{
		auto v = fib(x);
		fmt::print("fib[{}] = {}\n", x, v);
		root[x] = v;
	}

	std::ofstream fout("fibonacci.json", std::ofstream::binary);
	fout << root;
	fout.close();

	return 0;
}
