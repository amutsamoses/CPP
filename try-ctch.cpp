#include <iostream>

using namespace std;

void divide(int x, int y)
{
	try
	{
		if (y != 0)
		{
			int z = x / y;
			cout << "Divide "<< z; 
		}
		else
		{
			throw "Dont put 0 as denominator";
		}
	}
	catch (const char *s)
		{
			cout << s << endl;
		}
}
void multiply(int m, int n)
{
	try
	{
		if (m != 0)
		{
			int k = m * n;
			cout << "Multiply " << k;
		}
		else
		{
			throw "no multiplication of 0 ";
		}
	}
	catch (const char *s)
	{
		cout << s << endl;
	}
}
int main()
{
	int a, b, q, r;
	cout << "Enter a\n";
	cin >> a;
	cout << "Enter b\n";
	cin >> b;
	cout << "Enter q\n";
	cin >> q;
	cout << "Enter r\n";
	cin >> r;
	divide (a, b);
	multiply(q, r);
	
	return 0; 
}