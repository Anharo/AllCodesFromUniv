#include <iostream>
#include <vector>
using namespace std;
int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
void countingSort(int arr[], int size) {
    int maxVal = findMax(arr, size); 
    vector<int> count(maxVal + 1, 0);
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }
    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
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
    cout << "Enter the numbers (non-negative integers only): ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Original Array: ";
    displayArray(arr, size);
    countingSort(arr, size);
    cout << "Sorted Array: ";
    displayArray(arr, size);

    return 0;
}
