//use rand() to get values in the range of lb to ub
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int lb =20, ub = 100;
	
	//create some sequence of random numbers on every program excute
	//in the range of lb to ub
	for (int i = 0; i < 5; i++)
	{
		cout << (rand() % (ub - lb + 1)) + lb << " ";
	}
	return 0;
}