#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define V 9
#define INF 1000000
struct Node {
    int vertex;
    int distance;
    Node(int v, int dist) : vertex(v), distance(dist) {}
    bool operator>(const Node& other) const {
        return distance > other.distance;
    }
};

void dijkstra(int graph[V][V], int source) {
    vector<int> dist(V, INF);
    dist[source] = 0; 
    priority_queue<Node, vector<Node>, greater<Node>> pq;
    pq.push(Node(source, 0));

    while (!pq.empty()) {
        int u = pq.top().vertex;
        int d = pq.top().distance;
        pq.pop();
        if (d > dist[u]) {
            continue;
        }
        for (int v = 0; v < V; v++) {
            if (graph[u][v] != 0 && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                pq.push(Node(v, dist[v]));
            }
        }
    }
    cout << "Shortest distances from source " << source << ":\n";
    for (int i = 0; i < V; i++) {
        if (dist[i] == INF) {
            cout << "Vertex " << i << ": INF\n";
        } else {
            cout << "Vertex " << i << ": " << dist[i] << endl;
        }
    }
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
    dijkstra(graph, 0);
    return 0;
}
