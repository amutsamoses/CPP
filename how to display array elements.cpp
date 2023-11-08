#include <iostream>

using namespace std;
int main()
{
	int numbers[5] = {12, 7, 5, 35, 6};
	
	cout << "The Numbers are: \n" << endl;
	
	//print the elements using renge-based for loop
	for (const int &n : numbers)
	{
		cout << n << " " << endl;
	}
	cout << "The numbers are: \n" << endl;
	
	//print elements using traditional for loop
	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << " ";
	}
	return 0;
}