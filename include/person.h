#include <iostream>
#include <string>

using namespace std;

class Person {

	string name;

	public:

		Person(string n);

		bool has_name();

		string get_name();

		void greet();
};