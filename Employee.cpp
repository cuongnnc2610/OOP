#include <iostream>
#include <string.h>
#define max 100

using namespace std;

class Employee
{
	char name[max];
	
	public:
		void setName(char inputName[]);
		char* getName();
};

// Implementation
void Employee::setName(char inputName[])
{
	strcpy(name, inputName);
}

char* Employee::getName()
{
	return name;
}
