#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        bool swapped = false; 

        for (int i = 0; i < size - pass - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }
        if (swapped==false) break;
    }
}
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "How many numbers do you want to sort? ";
    cin >> size;
    int arr[size];
    cout << "Enter the numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Original Array: ";
    displayArray(arr, size);
    bubbleSort(arr, size);
    cout << "Sorted Array: ";
    displayArray(arr, size);

    return 0;
}
