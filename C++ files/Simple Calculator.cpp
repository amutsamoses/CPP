#include <iostream>
#include <stdio.h>
#include "conio.h"
#include "stdlib.h"
using namespace std;
int main()
{
	
	int opr;
	int num1, num2, x;
	
	//operation of the calculator
	do
	{
		cout << "Select an operation to perform Calculation"
		
		"\n1 = Addition"
		"\n2 = Subtraction"
		"\n3 = Multiplication"
		"\n4 = Division"
		"\n5 = Square"
		"\n6 = Exit"
		"\n \n Select a Choice ";
		
		cin >> opr;
		switch (opr)
		{
			//Addition
			case 1:
				cout << "You have selected Addition Operation.";
				cout << "\n Enter two numbers: \n";
				cin >> num1 >> num2;
				x = num1 + num2;
				cout << "Sum of two numbers = " << x;
				break;
			//Subtraction
			case 2:
				cout << "You have selected Substraction Operation.";
				cout << "\n Enter two number: \n";
				cin >> num1 >> num2;
				x = num1 - num2;
				cout << "Difference of two numbers = " << x;
				break;
				
			// Multiplication
			case 3:
				cout << "You have selected Multiplication Operation.";
				cout << "\n Enter two numbers: \n";
				cin >> num1 >> num2;
				x = num1 * num2;
				cout << "Product of two numbers = " << x;
				break;
				
			//Division
			case 4:
				 cout << "You have selected Division Operation.";
				 cout << "\n Enter two number \n";
				 cin >> num1 >> num2;
				 //check for divisor if its zero
				 while (num2 == 0)
				 {
				 	cout << "\n Divisor cannot be zero"
				 			"\n Please enter a positive or negative divisor but zero";
				 			cin >> num2;
				 }
				 x = num1 / num2;
				 cout << "\n Quotient = " << x;
				 break;
				 
			//Square of number
			case 5:
				cout << "You have selected Square Operation.";
				cout << "\n Enter any number: \n";
				cin >> num1;
				x = num1 * num1;
				cout << "Square is = " << x;
				break;
				
			case 6:
				exit (0); // terminate the program
				break;
			default:
				cout << "\n Oops Something went wrong...!!!";
				break;
		}
		
		cout << "\n________________________________________\n";
	}
	while (opr != 6);
	getch();
}