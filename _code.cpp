#include<bits/stdc++.h>
using namespace std;
class Graph{
    map<int, bool> visited;
    map<int, list<int>> adj;
    public:
        void insertEdge(int, int);
        void DFS(int);
};

void Graph::insertEdge(int v, int w){
    adj[v].push_back(w);
}

void Graph::DFS(int s){
    visited[s] = true;
    cout << s << " ";
    for(auto adjacent: adj[s]){
        if(!visited[adjacent]){
            DFS(adjacent);
        }
    }
}


int main(){
    Graph g;
    g.insertEdge(0, 1);
    g.insertEdge(0, 2);
    g.insertEdge(1, 2);
    g.insertEdge(2, 0);
    g.insertEdge(2, 3);
    g.insertEdge(3, 3);
    g.DFS(2);
    return 0;
}