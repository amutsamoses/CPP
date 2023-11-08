#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

// Function to remove punctuation and convert to uppercase
string preprocessString(const string& inputStr) {
    string result = inputStr;
    for (char& c : result) {
        if (ispunct(c)) {
            c = ' ';  // Replace punctuation with space
        } else {
            c = toupper(c);  // Convert to uppercase
        }
    }
    return result;
}

// Function to check if a string is a strict palindrome
bool isStrictPalindrome(const string& inputStr, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (inputStr[start] != inputStr[end]) {
        return false;
    }
    return isStrictPalindrome(inputStr, start + 1, end - 1);
}

// Function to check if a string is an ordinary palindrome
bool isOrdinaryPalindrome(const string& inputStr) {
    string processedStr = preprocessString(inputStr);

    // Remove spaces
    processedStr.erase(remove(processedStr.begin(), processedStr.end(), ' '), processedStr.end());

    return isStrictPalindrome(processedStr, 0, processedStr.length() - 1);
}

int main() {
    cout << "Welcome to the Palindrome Checker!" << endl;
    cout << "Please enter a string: ";

    string user_input;
    getline(cin, user_input);

    // Step 1: Preprocess the input
    string processed_input = preprocessString(user_input);

    // Step 2: Check if it's a strict palindrome
    bool is_strict = isStrictPalindrome(processed_input, 0, processed_input.length() - 1);

    // Step 3: Check if it's an ordinary palindrome
    bool is_ordinary = isOrdinaryPalindrome(user_input);

    // Step 4: Determine and display the result
    if (is_strict) {
        cout << "It's a strict palindrome." << endl;
    } else if (is_ordinary) {
        cout << "It's an ordinary palindrome." << endl;
    } else {
        cout << "It's not a palindrome." << endl;
    }

    return 0;
}
