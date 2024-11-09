#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int j = 0; j < n - 1; j++) {
        for (int k = 0; k < n - j - 1; k++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 10, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "OG array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
