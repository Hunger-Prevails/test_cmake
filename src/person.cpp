#include <iostream>
#include <string>
#include "person.h"

using namespace std;

Person::Person(string n)
{
	this->name = n;
}

bool Person::has_name()
{
	return !this->name.empty();
}

string Person::get_name()
{
	return this->name;
}

void Person::greet()
{
	cout << "HEY MY NAME IS [ " << this->name << " ]" << endl;
}