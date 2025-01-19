#include <iostream>
using namespace std;
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int current = arr[i]; 
        int j = i - 1;
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
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
    insertionSort(arr, size);
    cout << "Sorted Array: ";
    displayArray(arr, size);

    return 0;
}
