#include <iostream>
#include <string>

using namespace std;

string prompt ("Enter a line of text: ") , line ( 50, '*'); //Global strings

int main()
{
	string text; // empty string
	
	cout << line << endl << prompt << endl;
	
	getline( cin, text); //reads the line of text
	
	cout << line << endl
		 << "Your text is " << text.size()
		 << "characters long!" << endl;
		 
	string copy(text),  //two new strings: a copy and the first 10 characters
						//starting with position 0
						
	cout << "Your text: \n" << copy << endl;
	text = "1234567890"; //Assignment
	cout << line << endl
		 << "The first 10 characters: \n " << start << endl;
		 << text << endl;
		 
	return 0;
}