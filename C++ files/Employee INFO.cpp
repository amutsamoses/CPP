// c++ progam to read and print employees information using multiple inheritance

#include <iostream>
#include <stdio.h>
using namespace std;

// base class - basic info
class basicInfo
{
	protected:
		char  name[30];
		int   empID;
		char  gender;
		
    public:
    	void getBasicInfo(void)
    	{
    		cout << "Enter Name:" ;
    		cin.getline(name,30);
    		cout << "Enter emp.ID:";
    		cin>>empID;
    		cout << "Enter Gender:";
    		cin>>gender;
		}
};

//Basic class - department info
class deptInfo
{
	protected:
		char  deptName[30];
		char  assignedWork[30];
		int   timetocomplete;
	
	public:
		void getDeptInfo(void)
		{
			cout << "Enter Department Name:";
			cin.ignore(1);
			cin.getline(deptName, 30);
			cout << "Enter Assigned Work:";
			fflush(stdin);
			cin.getline(assignedWork, 30);
			cout << "Enter time in hours to complete work:";
			cin>>timetocomplete;
		}
};
//final class (derived class) - employee
class employee:private basicInfo, private deptInfo
{
	public:
		void getEmployeeInfo(void)
		{
			cout << "Enter employee's basic info:" << endl;
			//call getBasicInfo()vof class basicInfo
			getBasicInfo();
			//call of public member function
			cout << "Enter employee's department info:" << endl;
			//call getDeptInfo() of class deptInfo
			getDeptInfo();
			//calling of public member function
		}
		
		void printEmployeeInfo(void)
		{
			cout << "Employee's Infomation is:" << endl;
			cout << "Basic Information...:"     << endl;
			//accessing protected data
			cout << "Name: " << name << endl;
			//accessing protected data
			cout << "Employee ID: " << empID << endl;
			//accessing protected data
			cout << "Gender: " << gender << endl <<endl;
			
			cout << "Department Information...:" <<endl;
			//accessing protected data
			cout << "Department Name: " <<deptName <<endl;
			//accessing protected data
			cout << "Assingned Work: " <<assignedWork << endl;
			//accessing protected data
			cout << "Time to complete work: " <<timetocomplete <<endl;
		}
};

int main()
{
	//create object of class emloyee
	employee emp;
	
	emp.getEmployeeInfo();
	emp.printEmployeeInfo();
	
	return 0;
}

