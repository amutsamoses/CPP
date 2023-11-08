#include <iostream>
#include <string>


std::string colName(long long int n) {
    std::string result = "";

    while (n > 0) {
        // Calculate the remainder after dividing by 26
        int remainder = (n - 1) % 26;

        // Convert the remainder to a corresponding character
        char colChar = 'A' + remainder;

        // Prepend the character to the result
        result = colChar + result;

        // Update n for the next iteration
        n = (n - 1) / 26;
    }

    return result;
}
int main() {
    long long int n = 28;
    std::string columnName = colName(n);
    std::cout << "Column Name: " << columnName << std::endl;
    return 0;
}