#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	//will create some sequence of random numbers on every program run
	for (int i = 0; i < 9; i++)
	{
		cout << rand() << " ";
	}
	return 0;
}