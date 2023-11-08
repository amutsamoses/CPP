#include <iostream>
using namespace std;

void function()
{
	static int i = 0;  //static variable
	int j = 0; //local variable

i++;
j++;

cout << " i = " << i << " and j = " << j << endl;

}
int main()
{
	function();
	function();
	function();
	
}
return 0;