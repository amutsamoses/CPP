#include <iostream>
#include <climits> // definition of INT_MIN
using namespace std;

int main()
{
	cout << "Range of types int snd unsigned int"
		 << endl << endl;
	cout << "Type        Minimum       Maximum"
	     << endl
	     << "__________________________________"
	     << endl;
	     
	cout << "int         " << INT_MIN << "        "
	                       << INT_MAX << endl;
	                       
	cout << "unsigned int   " <<  "       0       "
							  << UINT_MAX << endl;
							  
	return 0;
}