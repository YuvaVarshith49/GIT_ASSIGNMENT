#include <iostream>
using namespace std;

void swap(int &k, int &l) {
    int temp = k;
    k = l;
    l = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as the pivot
    int j = low - 1;       // Index of smaller element

    for (int k = low; k < high; k++) {
        if (arr[j] < pivot) {
            j++;
            swap(arr[j], arr[k]);
        }
    }

    swap(arr[j + 1], arr[high]);
    return (j + 1); // Returning the partition index
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Sorting elements before partition
        quickSort(arr, pi + 1, high); // Sorting elements after partition
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = { 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
