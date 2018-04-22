#include <iostream>
#include <string.h>
#define max 100

using namespace std;

class Employee
{
	char name[max];
	
	public:
		void setName(char inputName[])
		{
			strcpy(name, inputName);
		}
		char* getName()
		{
			return name;
		}
};

class Department
{
	char name[max];
	Employee leader;
	Employee employees[max];
	public:
		void setName(char inputName[])
		{
			strcpy(name, inputName);
		}
		
		char* getName()
		{
			return name;
		}
		
		int getNumOfEmployees()
		{
			return sizeof(employees);
		}
		
		void setLeader(Employee inputEmployee)
		{
			leader = inputEmployee;
		}
			
		void addEmployee(Employee inputEmployee)
		{
			int employees_length;
			employees[employees_length++] = inputEmployee;
		}
			
};

class CompanyInfo
{
	char name[max], address[max];
	Department departments[max];
	public:
		void setCompanyName(char inputName[])
		{
			strcpy(name, inputName);
		}
		
		void setCompanyAdd(char inputAdd[])
		{
			strcpy(address, inputAdd);
		}
		
		char* getCompanyName()
		{
			return name;
		}
		
		char* getCompanyAdd()
		{
			return address;
		}
		
		Department* getDepartments()
		{
			return departments;
		}
		
		void addDepartment(Department inputDepartment)
		{
			int departments_length;
			departments[departments_length++] = inputDepartment;
		}
};



int main()
{
	CompanyInfo mgm;
	mgm.setCompanyName("mgm");
	mgm.setCompanyAdd("07 Phan Chau Trinh");
	
	Department departHR;
	departHR.setName("HR");
	Employee leaderHR; 
	leaderHR.setName("David Muller");
	departHR.setLeader(leaderHR);
	departHR.addEmployee(leaderHR);
	mgm.addDepartment(departHR);
	
	Department departResearch;
	departResearch.setName("Research");
	Employee leaderResearch, employee1; 
	leaderResearch.setName("Trinh Tran");
	departResearch.setLeader(leaderResearch);
	employee1.setName("Tam Vinh");
	departResearch.addEmployee(employee1);
	mgm.addDepartment(departResearch);
	
	cout << "Name: " << mgm.getCompanyName();
	cout << "\nAddress: " << mgm.getCompanyAdd();
	cout << "\n\nDepartments:";
	cout << "\nDepartment name\t\tNumber of employees\t\tLead";
	
	Department* mgmDepartments = mgm.getDepartments();
	return 0;
}
		

 
	
