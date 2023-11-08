#include <iostream>
using namespace std;

int max(int y, int x)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 20, b = 40;
	
	int m = max(a, b);
	
	cout << "m is " << m << endl;
		return m;
}