//how to get values in range of 0 to N-1 using using rand()
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int N = 100;
	
	//creating some sequence of random numbers on every program 
	//runs withn the range 0 to N-1
	for (int i = 0; i < 5; i++)
	{
		cout << rand () % N << " ";
	}
	return 0;
}