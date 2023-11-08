#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	//creating different sequence of random numbers on every program
	
	//current time as seed for rand()
	srand(time(0));
	
	for (int i = 0; i < 5; i++)
	{
		cout << rand() << " ";
	}
	return 0;
}