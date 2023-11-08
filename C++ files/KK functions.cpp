#include <iostream>
using namespace std;

void line(),
message(); //prototype

int main()
{
	cout << "Hello! The program start in the main()."
	     << endl;
	line();
	message();
	line();
	cout  << "At the end of main()." 
	      << endl;
	
	return 0;
}

void line()  //To draw a line
{
	cout  << "___________________________________" << endl;
}

void message()  // To display a message
{
	cout  <<  "In function message()." << endl;
}

