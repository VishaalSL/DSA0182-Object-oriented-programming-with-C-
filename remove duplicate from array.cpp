#include <iostream>
#include <unordered_set>

void removeDuplicates(int arr[], int &size) {
    std::unordered_set<int> seen;

    int newIndex = 0;
    for (int i = 0; i < size; ++i) {
        if (seen.find(arr[i]) == seen.end()) {
            arr[newIndex++] = arr[i];
            seen.insert(arr[i]);
        }
    }

    size = newIndex;
}

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int size;

    // Input array size and elements
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size > maxSize || size <= 0) {
        std::cerr << "Invalid array size\n";
        return 1;
    }

    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Remove duplicates
    removeDuplicates(arr, size);

    // Display array after removing duplicates
    std::cout << "Array after removing duplicates:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

