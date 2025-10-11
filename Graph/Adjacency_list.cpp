#include<iostream>
#include<vector>
using namespace std;

class Graph{
    int v;
    vector<vector<int>> adj;
    public:
        Graph(int vertices){
            v=vertices;
            adj.resize(v);
        }
        void addEdge(int u,int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        void printGraph(){
            cout<<"Adjacency List:\n";
            for(int i=0;i<v;i++){
                cout<<i<<"->";
                for(int neighbor:adj[i]){
                    cout<<neighbor<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){

    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,3);
    g.addEdge(3,4);
    cout<<"Adjacency List of Graph:"<<endl;
    g.printGraph();

    return 0;
}