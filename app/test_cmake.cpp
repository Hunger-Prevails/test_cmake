# include <iostream>
# include <fstream>

# include "person.h"
# include "json.h"

using namespace std;

int main() {
	Person person_a("Alice");
	Person person_b("Bob");

	person_a.greet();
	person_b.greet();

	Json::Value root;

	root["val"] = 25;

	std::ofstream fout("people.json", std::ofstream::binary);

	fout << root;
	fout.close();

	return 0;
}
