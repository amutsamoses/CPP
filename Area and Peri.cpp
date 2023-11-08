#include <iostream>

using namespace std;

int main()
{
	int length, width, Area, Perimeter;
	
	cout << "To find the Area and Perimeter of Circle: \n ";
	cout << "========================================: \n";
	cout << "Length of Rectangle:";
	cin>>length;
	cout << "Width of Rectangle:";
	cin>>width;
	Area = length * width;
	Perimeter = 2 * (length + width);
	cout << "Area of Rectangle: " << Area << endl;
	cout << "Perimeter of Rectangle: " << Perimeter << endl;
	return 0;
}