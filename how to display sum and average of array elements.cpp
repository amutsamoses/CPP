#include <iostream>

using namespace std;

int main()
{
	//initialize array without specifying the size
	double numbers[] = {7, 5, 6, 12, 35, 27};
	double count = 0;
	double sum = 0;
	double average;
	
	cout << "The numbers are: \n" << endl;
	
	//iterate through elements using range-based for loop
	
	for (const double &n : numbers)
	{
		cout << n << " \n" << endl;

	//calculate the sum
	sum += n;
	
	//count the number of array elements
	count++;
	}
	//fnd the sum
	cout << "Thier sum : \n" << sum << endl;
	
	//find the average
	average = sum / count;
	
	cout << "The Average : \n" <<average<< endl;
	
	return 0;
}