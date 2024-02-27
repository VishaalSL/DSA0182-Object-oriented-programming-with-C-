#include <iostream>
using namespace std;
void minmax(int arr[], int size, int &min, int &max) {
    min = max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        } else if (arr[i] > max) {
            max = arr[i];
        }
    }
}
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int min, max;
    minmax(arr, size, min, max);
    cout << "Min element: " << min << endl;
    cout << "Max element: " << max << endl;
    return 0;
}

