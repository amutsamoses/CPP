#include <iostream>
#include <vector>

using namespace std;

int distinctSubsequences(string s) {
  // Create a table to store the number of distinct subsequences of the given string.
  int table[s.size() + 1][s.size() + 1];

  // Initialize the table.
  for (int i = 0; i <= s.size(); i++) {
    table[i][0] = 1;
  }

  // Iterate over the string and fill in the table.
  for (int i = 1; i <= s.size(); i++) {
    for (int j = 1; j <= s.size(); j++) {
      if (s[i - 1] == s[j - 1]) {
        table[i][j] = table[i - 1][j - 1] + table[i - 1][j];
      } else {
        table[i][j] = table[i - 1][j];
      }
    }
  }

  // Return the number of distinct subsequences of the given string.
  return table[s.size()][s.size()];
}

int main() {
  string s = "gfg";

  int distinctSubsequences = distinctSubsequences(s);

  cout << "The number of distinct subsequences of the string " << s << " is: " << distinctSubsequences << endl;

  return 0;
}