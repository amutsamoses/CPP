#include <iostream>
#include <string>
using namespace std;
string Name, Semester, Email;

int Year, Age, Reg, Phone;
int Unit1, Unit2, Unit3, Unit4, Unit5, Unit6, Unit7, Unit8, Unit9;
int Total, Avg;

int main()
{
    cout << "===================================================" << endl;
	cout << "Enter Your Student Details \n 	Enter Your Marks To Validate If Your Legible to Preceed to SEM 2" << endl;
	cout << "***************************************************" << endl;
	
	cout << "Student Name:" << endl;
	cin>>Name;
	cout << "Current Year Of Study:" << endl;
	cin>>Year;
	cout << "Semester:" << endl;
	cin>>Semester;
	cout << "Enter Age:" << endl;
	cin>>Age;
	cout << "Phone No.:" << endl;
	cin>>Phone;
	cout << "Reg No. In terms of PA106/G/*****/21:" << endl;
	cin>>Reg; 
	cout << "Email" << endl;
	cin>>Email;
	
	cout << "#################################################" << endl;
	cout << "Input Your Unit Score \n To Get Your Average Grade" << endl;
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	
	cout << "Visual Programming:" << endl;
	cin>>Unit1;
	cout << "Linear Algebra:" << endl;
	cin>>Unit2;
	cout << "Intergral Calculus:" << endl;
	cin>>Unit3;
	cout << "Business System Modelling:" << endl;
	cin>>Unit4;
	cout << "System Implementation Testing Maintenance: " << endl;
	cin>>Unit5;
	cout << "Oject Oriented Design & Analysis:" << endl;
	cin>>Unit6;
	cout << "Wireless Technology:" << endl;
	cin>>Unit7;
	cout << "Artificial Intelligence:" << endl;
	cin>>Unit8;
	cout << "E-commerce:" << endl;
	cin>>Unit9;
	
	Total = Unit1 + Unit2 + Unit3 + Unit4 + Unit5 + Unit6 + Unit7 + Unit8 + Unit9;
	
	Avg = Total/9;
	
	if(Avg >= 70 && Avg <=100)
	{
		cout <<"Your Grade Is A. \n  Proceed to Sem 2" << endl;
	}
	else if(Avg >=60 && Avg <=69)
	{
		cout << "Your Grade Is B. \n Proceed to Sem 2" << endl;
	}
	else if(Avg >=50 && Avg <=59)
	{
		cout << "Your Grade Is C. \n Proceed to Sem 2" << endl; 
	}
	else if(Avg >=40 && Avg <=49)
	{
		cout << "Your Grade Is D. \n Improve Performance, Proceed to Sem 2" << endl;
	}
	else if(Avg >100)
	{
		cout << "Invalid Input Grade! \n input values within range" << endl;
	}
	else
	{
		cout << "You Failed , Consider a Retake" << endl;
	}
	return 0;
	
}