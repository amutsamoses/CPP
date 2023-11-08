#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
//main driver
int main()
{
	//vector declared
	vector<int> data = {13, 5, 8, 9, 4, 2, 1};
	
	int i, j;
	
	//maximun value function prototype 
	int max_value = *max_element(data.begin(), data.end());
	
	//histogram
	for (i = max_value; i >= 0; --i)
	{
		cout.width(2);
		cout << i << " | " ;
		
		//making the values
		for (int j = 0; j < data.size(); j++)
		{
			if (data[j] >= i)
			{
				cout << "x ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;	
	}
	cout << "____________________________________________________"
		 << endl;
	cout << "   ";
	
	//Data to be printed
	for (int i = 0; i < data.size(); ++i)
	{
		cout << data[i] << "  ";
	}
	return 0;
}