#include <iostream>
using namespace std;

void insertionSort(int array[], int n) {
    for (int i = 1; i < n; i++) {
        int key = array[i];
        int j = i - 1;

        // Move elements of array[0..i-1] that are greater than key to one position ahead
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key; // Place the key at its correct position
    }
}

void printarrayay(int array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "OG arrayay: ";
    printarrayay(array, n);

    insertionSort(array, n);

    cout << "Sorted arrayay: ";
    printarrayay(array, n);

    return 0;
}
