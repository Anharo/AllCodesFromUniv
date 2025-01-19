#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define V 9
#define INF 1000000
struct Node {
    int vertex;
    int key;
    Node(int v, int k) : vertex(v), key(k) {}
    bool operator>(const Node& other) const {
        return key > other.key;
    }
};
void prim(int graph[V][V], int start) {
    vector<int> key(V, INF);
    key[start] = 0;  
    vector<bool> inMST(V, false);
    priority_queue<Node, vector<Node>, greater<Node>> pq;
    pq.push(Node(start, 0));
    vector<int> parent(V, -1);
    while (!pq.empty()) {
        int u = pq.top().vertex;
        pq.pop();
        inMST[u] = true;
        for (int v = 0; v < V; v++) {
            if (graph[u][v] != 0 && !inMST[v] && graph[u][v] < key[v]) {
                key[v] = graph[u][v];
                pq.push(Node(v, key[v]));
                parent[v] = u;
            }
        }
    }
    int totalWeight = 0;
    cout << "Minimum Spanning Tree (MST):\n";
    for (int i = 1; i < V; i++) {
        if (parent[i] != -1) {
            cout << "Edge: " << parent[i] << " - " << i << " | Weight: " << graph[i][parent[i]] << endl;
            totalWeight += graph[i][parent[i]];
        }
    }
    cout << "Total weight of MST: " << totalWeight << endl;
}
int main() {
    int graph[V][V] = {
        {0, 4, 0, 0, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 0, 0, 11, 0},
        {0, 8, 0, 7, 0, 4, 0, 0, 2},
        {0, 0, 7, 0, 9, 14, 0, 0, 0},
        {0, 0, 0, 9, 0, 10, 0, 0, 0},
        {0, 0, 4, 14, 10, 0, 2, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 1, 6},
        {8, 11, 0, 0, 0, 0, 1, 0, 7},
        {0, 0, 2, 0, 0, 0, 6, 7, 0}
    };
    prim(graph, 0);

    return 0;
}
