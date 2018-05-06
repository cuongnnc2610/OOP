#include <iostream>
#include <string.h>
#include "Employee.cpp"
#define max 100

using namespace std;

class Department
{
	char name[max];
	Employee leader;
	Employee employees[max];
	public:
		void setName(char inputName[]);		
		char* getName();		
		int getNumOfEmployees();		
		void setLeader(Employee inputEmployee);			
		void addEmployee(Employee inputEmployee);			
};

// Implementation
void Department::setName(char inputName[])
{
	strcpy(name, inputName);
}

char* Department::getName()
{
	return name;
}

int Department::getNumOfEmployees()
{
	return sizeof(employees);
}

void Department::setLeader(Employee inputEmployee)
{
	leader = inputEmployee;
}
		
void Department::addEmployee(Employee inputEmployee)
{
	int employees_length;
	employees[employees_length++] = inputEmployee;
}


