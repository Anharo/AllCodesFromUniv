#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  
        }
    }
    return -1;  
}
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int size;
    cout << "How many numbers do you want to search through? ";
    cin >> size;
    int arr[size];
    cout << "Enter the numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Original Array: ";
    displayArray(arr, size);
    int target;
    cout << "Enter the number you want to search for: ";
    cin >> target;
    int result = linearSearch(arr, size, target);
    if (result != -1) {
        cout << "Number " << target << " found at index " << result << endl;
    } else {
        cout << "Number " << target << " not found in the array." << endl;
    }
    return 0;
}
