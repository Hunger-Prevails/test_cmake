# include <iostream>
# include <fstream>

# include <cxxopts.hpp>
# include <fmt/format.h>
# include <range/v3/view.hpp>

# include "person.h"
# include "json.h"

namespace view = ranges::views;
using namespace std;

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
	Person person_a("Alice");
	Person person_b("Bob");

	person_a.greet();
	person_b.greet();

	Json::Value root;

	root["val"] = 25;

	std::ofstream fout("people.json", std::ofstream::binary);

	fout << root;
	fout.close();

	cxxopts::Options options("fibo", "Print the fibonacci sequence up to a value 'n'");
	options.add_options()("n,value", "The value to print to", cxxopts::value<int>()->default_value("10"));

	auto result = options.parse(argc, argv);
	auto n = result["value"].as<int>();

	for (int x: view::iota(1) | view::take(n))
	{
		fmt::print("fib({}) = {}\n", x, fib(x));
	}
	return 0;
}
