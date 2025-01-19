#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int>& bucket) {
    int n = bucket.size();
    for (int i = 1; i < n; i++) {
        int key = bucket[i];
        int j = i - 1;
        while (j >= 0 && bucket[j] > key) {
            bucket[j + 1] = bucket[j];
            j = j - 1;
        }
        bucket[j + 1] = key;
    }
}

void bucketSort(int arr[], int size) {
    int max_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    int bucketCount = size;  
    vector<vector<int>> buckets(bucketCount);
    for (int i = 0; i < size; i++) {
        int index = (arr[i] * bucketCount) / (max_val + 1);
        buckets[index].push_back(arr[i]);
    }
    for (int i = 0; i < bucketCount; i++) {
        insertionSort(buckets[i]);
    }
    int index = 0;
    for (int i = 0; i < bucketCount; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
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
    bucketSort(arr, size);
    cout << "Sorted Array: ";
    displayArray(arr, size);

    return 0;
}
