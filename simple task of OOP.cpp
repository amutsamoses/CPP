#include <iostream>

using namespace std;

class Employee
{
	public:
		string Name;
		string county;
		string occupation;
		string dept;
		string Email;
		int OfficeNo;
		int deskNo;
		int StaffId;
		int YearOfEmployment;
		
	private:
		int salary;
		int ID;
		int Age;
		int DateOfBirth;
		
		
};
int main()
{
	Employee EmpIct;
	
	EmpIct.Name = " ";
	EmpIct.county = " ";
	EmpIct.OfficeNo;
	EmpIct.deskNo;
	EmpIct.occupation = " ";
	EmpIct.dept = " ";
	EmpIct.Email = " ";
	EmpIct.StaffId;
	EmpIct.YearOfEmployment;
	
	cout << EmpIct.Name << " \n" << EmpIct.county << " \n" << EmpIct.OfficeNo << " \n" << EmpIct.deskNo << " \n"
	<< EmpIct.occupation << " \n" << EmpIct.dept << " " << EmpIct.Email << " " << EmpIct.StaffId << " " << EmpIct.YearOfEmployment << " \n";
	
	return 0;
}