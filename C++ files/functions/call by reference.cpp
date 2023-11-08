#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
	int swap;
	swap = *x;
	*x = *y;
	swap = *y = swap;
}
int main()
{
	int x = 500;
	int y = 600;
	
	swap (&x, &y);
	cout << " Value of x is: " << x << endl;
	cout << " Value of y is: " << y << endl;
	return 0;
}