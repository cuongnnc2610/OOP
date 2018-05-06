#include <iostream>
#include <string.h>
#include "Department.cpp"
#define max 100

using namespace std;

class CompanyInfo
{
	char name[max], address[max];
	Department departments[max];
	public:
		void setCompanyName(char inputName[]);
		void setCompanyAdd(char inputAdd[]);		
		char* getCompanyName();
		char* getCompanyAdd();		
		Department* getDepartments();		
		void addDepartment(Department inputDepartment);
};

// Implementation

void CompanyInfo::setCompanyName(char inputName[])
{
	strcpy(name, inputName);
}
		
void CompanyInfo::setCompanyAdd(char inputAdd[])
{
	strcpy(address, inputAdd);
}
		
char* CompanyInfo::getCompanyName()
{
	return name;
}
		
char* CompanyInfo::getCompanyAdd()
{
	return address;
}
		
Department* CompanyInfo::getDepartments()
{
	return departments;
}
		
void CompanyInfo::addDepartment(Department inputDepartment)
{
	int departments_length;
	departments[departments_length++] = inputDepartment;
}

