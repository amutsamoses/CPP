#include <iostream>
#include <vector>

void convertToWave(int n, std::vector<int>& arr) {
    for (int i = 0; i < n - 1; i += 2) {
        // Swap the current element with the next element
        std::swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    convertToWave(n, arr);

    std::cout << "Waveform: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
