#include <iostream>

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: factorial of n is n times factorial of (n-1)
    else {
        return static_cast<unsigned long long>(n) * factorial(n - 1);
    }
}

int main() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    // Call the factorial function
    unsigned long long result = factorial(n);

    std::cout << "Factorial of " << n << " is " << result << std::endl;
    return 0;
}
