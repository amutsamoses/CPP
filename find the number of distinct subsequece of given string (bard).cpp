#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1410065415;

int distinctSubsequences(string s)
{
	//create a table to store the number of distinct subsequeces of the given string
	int table[s.size() + 1][s.size() + 1];
	
	//initialize the table
	for (int i = 0; i <= s.size(); i++)
	{
		table[i][0] = 1;
	}
	//iterate over the table and fill in the table
	for (int i = 1; i <= s.size(); i++)
	{
		for (int j = 1; j <= s.size(); j++)
		{
			if (s[i - 1] == s[j - 1])
			{
				table[i][j] = (table[i - 1][j - 1] + table[i - 1][j]) % MOD;
			}
			else
			{
				table[i][j] = table[i - 1][j] % MOD;
			}
		}
	}
	//return the number of distinct subsequences of the given string modulo 10^9+7
	return table[s.size()][s.size()] % MOD;
}
int main()
{
	string s;
	cout << " Enter the String: \n";
	cin >> s;
	
	int answer = distinctSubsequences(s);
	
	cout << "The number of distinct subsequences of the string " << s << " is: " << answer << endl;
}