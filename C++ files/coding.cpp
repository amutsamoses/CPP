#include <iostream>
#include <string>
using namespace std;

int main()
{
	string first;
	cout << "Enter your first name:" << endl;
	cin >>first;
	string last;
	cout << "Enter your lastname:" << endl;
	cin >>last;
	string name = first + "" + last;
	cout << "Hello"<<name<<",welcome" << endl;
	
	return 0;
}