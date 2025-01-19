
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int optimalMerge(const vector<int>& files) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int size : files) {
        minHeap.push(size);
    }
    int totalCost = 0;
    while (minHeap.size() > 1) {
        int first = minHeap.top();
        minHeap.pop();
        int second = minHeap.top();
        minHeap.pop();
        int mergeCost = first + second;
        totalCost += mergeCost;
        minHeap.push(mergeCost);
    }
    return totalCost;
}
int main() {
    vector<int> files = {4, 2, 7, 8, 3, 6};
    cout << "Optimal merge cost: " << optimalMerge(files) << endl;
    return 0;
}
