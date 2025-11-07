#include <iostream>
#include <string>
#include "person.h"

person::Person::Person(std::string n)
{
	this->name = n;
}

bool person::Person::has_name()
{
	return !this->name.empty();
}

std::string person::Person::get_name()
{
	return this->name;
}

void person::Person::greet()
{
	std::cout << "HEY MY NAME IS [ " << this->name << " ]" << std::endl;
}
