#include <iostream>
using namespace std;
void selectionSort(int arr[], int size) {
    for (int start = 0; start < size - 1; start++) {
        int smallest = start; 
        for (int i = start + 1; i < size; i++) {
            if (arr[i] < arr[smallest]) {
                smallest = i;
            }
        }
        if (smallest != start) {
            int temp = arr[start];
            arr[start] = arr[smallest];
            arr[smallest] = temp;
        }
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
    selectionSort(arr, size);
    cout << "Sorted Array: ";
    displayArray(arr, size);

    return 0;
}
