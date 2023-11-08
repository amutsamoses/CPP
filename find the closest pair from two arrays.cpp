#include <iostream>
#include <vector>
#include <climits> // For INT_MAX

std::vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
    std::vector<int> result;
    int diff = INT_MAX; // Initialize with a large value to track the minimum difference

    int left = 0; // Pointer for the first array (arr)
    int right = m - 1; // Pointer for the second array (brr)

    while (left < n && right >= 0) {
        int sum = arr[left] + brr[right];
        int currentDiff = std::abs(sum - x);

        if (currentDiff < diff) {
            // Found a closer pair, update the result and diff
            result.clear();
            result.push_back(arr[left]);
            result.push_back(brr[right]);
            diff = currentDiff;
        }

        if (sum < x) {
            // Move the left pointer to increase the sum
            left++;
        } else {
            // Move the right pointer to decrease the sum
            right--;
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 4, 5, 7};
    int brr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(brr) / sizeof(brr[0]);
    int x = 38;

    std::vector<int> closestPair = printClosest(arr, brr, n, m, x);

    if (!closestPair.empty()) {
        std::cout << "Closest pair to " << x << ": " << closestPair[0] << " and " << closestPair[1] << std::endl;
    } else {
        std::cout << "No pair found." << std::endl;
    }

    return 0;
}
