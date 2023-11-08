#include <iostream>
using namespace std;

int main()
{
	string n_temp;
	getline(cin, n_temp);
	
	int n ;
	string lst[10] = 
	{
		"zero", "one", "two",
		"three", "four", "five", "six",
		"seven", "eight", "nine"
	};
	if(n<0)
	{
		cout << "smaller than 0" << endl;
	}
	else if(n>9)
	{
		cout << "greater than 9" << endl;
	}
	else
	{
		cout << lst[n] << endl;
	}
	
	return 0;
}