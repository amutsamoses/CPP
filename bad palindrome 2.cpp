#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool is_palindrome(string str) {
  if (str.length() <= 1) {
    return true;
  }
  return str[0] == str[str.length() - 1] && is_palindrome(str.substr(1, str.length() - 2));
}

string remove_punctuation(string str) {
  string new_str = "";
  for (int i = 0; i < str.length(); i++) {
    if (!ispunct(str[i])) {
      new_str += str[i];
    }
  }
  return new_str;
}

string remove_spaces(string str) {
  string new_str = "";
  for (int i = 0; i < str.length(); i++) {
    if (str[i] != ' ') {
      new_str += str[i];
    }
  }
  return new_str;
}

int main() {
  cout << "Welcome to the palindrome checker!" << endl;

  string str;
  cout << "Enter a string: ";
  cin >> str;

  // Make a copy of the string with punctuation removed and all text upper case.
  string text_upper = remove_punctuation(str);
  transform(text_upper.begin(), text_upper.end(), text_upper.begin(), ::toupper);

  // Invoke the recursive palindrome function using the copy.
  bool is_palindrome_upper = is_palindrome(text_upper);

  // Make another copy of the string, removing both punctuation and spaces.
  string text_no_spaces = remove_spaces(remove_punctuation(str));

  // Invoke the recursive palindrome function on that copy.
  bool is_palindrome_no_spaces = is_palindrome(text_no_spaces);

  if (is_palindrome_upper) {
    cout << "The text is a strict palindrome." << endl;
  } else if (is_palindrome_no_spaces) {
    cout << "The text is an ordinary palindrome." << endl;
  } else {
    cout << "The text is not a palindrome." << endl;
  }

  return 0;
}