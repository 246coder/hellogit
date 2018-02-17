
#ifndef PERSON_H
#define PERSON_H

class Person
{
	private:
	std::string name;
	int age=0;
	
	public:
	Person(std::string, int);
	
	void setname(std::string x);
	std::string getname();
	
	void setage(int y);
	int getage();
};
#endif
