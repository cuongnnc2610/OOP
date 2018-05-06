#include <iostream>
#include <string.h>
#include "CompanyInfo.cpp"
#define max 100

using namespace std;

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
		

 
	
