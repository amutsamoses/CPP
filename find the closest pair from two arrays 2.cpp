#include <iostream>
#include <vector>

using namespace std;

vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
  // Initialize the difference between pair sum and x.
  int diff = INT_MAX;

  // Initialize the two result indexes from arr[] and brr[] respectively.
  int res_l, res_r;

  // Start from left side of arr[] and right side of brr[].
  int l = 0, r = m - 1;
  while (l < n && r >= 0) {
    // If this pair is closer to x than the previously found closest, then update res_l, res_r and diff.
    if (abs(arr[l] + brr[r] - x) < diff) {
      res_l = l;
      res_r = r;
      diff = abs(arr[l] + brr[r] - x);
    }

    // If sum of this pair is more than x, move to smaller side.
    if (arr[l] + brr[r] > x) {
      r--;
    }

    // Else move to the greater side.
    else {
      l++;
    }
  }

  // Create a vector to store the result.
  vector<int> result;
  result.push_back(arr[res_l]);
  result.push_back(brr[res_r]);

  // Return the result vector.
  return result;
}

int main() {
  // Declare the arrays.
  int arr[] = {1, 4, 5, 7};
  int brr[] = {10, 20, 30, 40};

  // Get the size of the arrays.
  int n = sizeof(arr) / sizeof(arr[0]);
  int m = sizeof(brr) / sizeof(brr[0]);

  // Get the target sum.
  int x = 38;

  // Print the closest pair.
  vector<int> result = printClosest(arr, brr, n, m, x);
  cout << "The closest pair is [" << result[0] << ", " << result[1] << "]" << endl;

  return 0;
}