#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MOD = 1410065415;

int distinctSubsequences(string s)
{
	int n = s.length();
	vector<long long> dp(n + 1, 0);
	
	//Base case: there is one empty subsequence
	dp[0] = 1;
	
	//initialize a map to store the last element of each character
	vector<int> lastIndex(26, -1);
	
	for (int i = 1; i <= n; i++)
	{
		dp[i] = (2 * dp[i - 1]) % MOD;
		
		if (lastIndex[s[i - 1] - 'a'] != -1)
		{
			//if the currenct character has occurred before, subtract the count from subsequences
			dp[i] = (dp[i] - dp[lastIndex[s[i - 1] - 'a']] + MOD) % MOD;	
		}
		//update the last index of the current character
		lastIndex[s[i - 1] - 'a'] = i -1;
	}
	return (dp[n] - 1 + MOD) % MOD;
}
int main()
{
	string s ;
	cout << "Enter the String : \n" ;
	cin >> s;
	
	int answer = distinctSubsequences(s);
	
	cout << "Number of distinctSubsequences : " << answer << endl;
	
	return 0;
}