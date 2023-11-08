#include <iostream>
#include <cmath>
using namespace std;

double pow(double base, int exp);

int main()
{
	double base = 0.0;
	int exponent = 0;
	
	cout << "  ****Computing Integers Powers  ****\n" << endl;
	cout << "Enter test values.\n"
		 << "Base (floating-point): ";  cin >> base;
	cout << "Exponent  (integer):   ";  cin >> exponent;
	
	cout << "Results of  " << base << " to the power of "
		 <<  exponent << " = " << pow( base, exponent)
		 <<  endl;
		 
	cout <<  " Computing with the standard function: "
		 <<  pow( base, (double) exponent) << endl;
	
	return 0;
}

double pow(double base, int exp)
{
	if (exp == 0)  return 1.0;
	if (base == 0.0)
		if (exp > 0)  return 0.0;
		else          return HUGE_VAL;
	if (exp < 0)
	{
		base = 1.0/base;
		exp = -exp;
	}
	double power = 1.0;
	for (int n = 1; n <= exp; ++n)
		power *= base;
	return power;
}