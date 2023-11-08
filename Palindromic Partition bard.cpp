#include <iostream>
#include <string>

int palindromicPartition(string str) 
{
  int n = str.length();

  // Create a table to store the minimum number of cuts needed for palindrome partitioning of the substring str[0..i].
  int table[n];

  // Initialize the table with n-1 for all indices.
  for (int i = 0; i < n; i++) 
  {
    table[i] = n - 1;
  }

  // Iterate over the string from 1 to n-1.
  for (int i = 1; i < n; i++) 
  {
    // If str[i] is equal to str[0], then table[i] = 0.
    if (str[i] == str[0]) 
	{
      table[i] = 0;
    } else 
	{
      // Iterate over all indices j such that 0 <= j < i and str[j] is equal to str[i].
      for (int j = 0; j < i; j++) 
	  {
        if (str[j] == str[i]) 
		{
          // Update table[i] as min(table[i], table[j] + 1).
          table[i] = min(table[i], table[j] + 1);
        }
      }
    }
  }

  // Return table[n-1]. This is the minimum number of cuts needed for palindrome partitioning of the given string.
  return table[n - 1];
}
int main() 
{
  string str = "ababbbabbababa";

  int minCuts = palindromicPartition(str);

  cout << "The minimum number of cuts needed for palindrome partitioning of the given string is: " << minCuts << endl;

  return 0;
}