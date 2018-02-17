#include <iostream>
#include <string>
#include "person.h"

using namespace std;

Person::Person(string x, int y)
{
	name=x;
	age=y;
}

void Person::setname(string x)
{
	name=x;
}

string Person::getname()
{
	return name;
}

void Person::setage(int y)
{
	age=y;
}

int Person::getage()
{
	return age;
}


