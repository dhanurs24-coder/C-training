#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Graph {
    int v;
    vector<vector<int>> adj;
public:
    Graph(int vertices) {
        v = vertices;
        adj.resize(v);
    }
    void addEdge(int u, int w) {
        adj[u].push_back(w);
        adj[w].push_back(u);
    }
    void BFS(int start) {
        vector<bool> visited(v, false);
        queue<int> q;
        visited[start] = true;
        q.push(start);
        cout << "BFS Traversal starting from node " << start << ": ";
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";
            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }
    void DFSUtil(int node, vector<bool>& visited) {
        visited[node] = true;
        cout << node << " ";
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                DFSUtil(neighbor, visited);
            }
        }
    }
    void DFS(int start) {
        vector<bool> visited(v, false);
        cout << "DFS Traversal starting from node " << start << ": ";
        DFSUtil(start, visited);
        cout << endl;
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    cout << "Graph Traversals:" << endl;
    g.BFS(0);
    g.DFS(0);
    return 0;
}