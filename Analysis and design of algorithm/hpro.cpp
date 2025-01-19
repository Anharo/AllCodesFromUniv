#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono> 
#include <cstdlib> 
using namespace std;
using namespace chrono;
void selectionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
void insertionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
double measureTime(void (*sortFunc)(vector<int>&), vector<int> arr) {
    auto start = high_resolution_clock::now();
    sortFunc(arr);
    auto end = high_resolution_clock::now();
    duration<double> elapsed = end - start;
    return elapsed.count();
}
void generateData(vector<int> &arr, int size, string type) {
    arr.clear();
    for (int i = 0; i < size; ++i) {
        arr.push_back(rand() % 10000); 
    }
    if (type == "sorted") {
        sort(arr.begin(), arr.end());
    } else if (type == "reverse") {
        sort(arr.begin(), arr.end(), greater<int>());
    }
}

int main() {
    srand(time(0)); 
    vector<int> sizes = {100, 500, 1000, 5000, 10000}; 
    vector<string> cases = {"random", "sorted", "reverse"};
    vector<int> arr;

    cout << "Size\tCase\t\tSelection Sort (s)\tInsertion Sort (s)\n";
    cout << "--------------------------------------------------------------------\n";

    for (int size : sizes) {
        for (string testCase : cases) {
            generateData(arr, size, testCase);
            double timeSelection = measureTime(selectionSort, arr);
            double timeInsertion = measureTime(insertionSort, arr);
            cout << size << "\t" << testCase << "\t\t" 
                 << timeSelection << "\t\t" 
                 << timeInsertion << "\n";
        }
    }
    return 0;
}
