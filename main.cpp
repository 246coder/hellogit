#include <iostream>
#include <string>
#include <vector>
#include "person.h"

using namespace std;

int main()
{
	Person p1 = {"Daveion", 19};
	Person p2 = {"John", 18};
	Person p3 = {"Lucy", 20};
	Person p4 = {"Jan", 19};
	
	vector <Person> myVector;
	myVector.push_back(p1);
	myVector.push_back(p2);
	myVector.push_back(p3);
	myVector.push_back(p4);
	
	cout<< "Name and Age of person";
	
	for (int a=0; a<myVector.size(); a++)
	{
		cout<< myVector[a].getname()<<endl;
		cout<< myVector[a].getage()<<endl;
	}
	
	return 0;
}
	
