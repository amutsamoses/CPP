#include <iostream>

#include <string>

using namespace std;

string colName (long long int n) {
  // Create a string to store the column name.
  string colName = "";

  // Iterate over the column number and convert it to a base-26 number.
  while (n > 0) {
    int remainder = n % 26;
    colName += char('A' + remainder);
    n = n / 26;
  }

  // Reverse the column name string.
  void reverse(string &str)
  {
  	int n = str.length();
  	for (int i = 0; i < /2; i++)
  	{
  		swap(str[i], str[n - i - 1]);
	}
  }
  reverse(colName);

  // Return the column name string.
  return colName;
}

int main() {
  long long int n = 12;

  string colName = colName(n);

  cout << "The column name for the integer " << n << " is: " << colName << endl;

  return 0;
}