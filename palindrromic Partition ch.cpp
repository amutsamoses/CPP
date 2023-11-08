#include <iostream>
#include <vector>
using namespace std;

int palindromicPartition(string str) {
    int n = str.length();

    // Create a table to store the minimum cuts
    vector<vector<int>> minCuts(n, vector<int>(n, 0));

    // Function to check if a substring is a palindrome
    auto isPalindrome = [&](int start, int end) {
        while (start < end) {
            if (str[start] != str[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    };

    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;

            // Initialize the minimum cuts to a large value
            minCuts[i][j] = n;

            if (isPalindrome(i, j)) {
                // If the substring is a palindrome, no cut is needed
                minCuts[i][j] = 0;
            } else {
                // Try all possible partitions and find the minimum cut
                for (int k = i; k < j; k++) {
                    minCuts[i][j] = min(minCuts[i][j], 1 + minCuts[i][k] + minCuts[k + 1][j]);
                }
            }
        }
    }

    // The result is stored in the top right cell of the table
    return minCuts[0][n - 1];
}

int main() {
    string str = "ababbbabbababa";
    int result = palindromicPartition(str);
    cout << "Minimum cuts needed for palindrome partitioning: " << result << endl;
    return 0;
}
