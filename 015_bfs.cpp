// BFS
// Reference Image: https://media.geeksforgeeks.org/wp-content/uploads/bfs-5.png
#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<list<int>> adj;
    
    public:
        Graph(int V);
        void insertEdge(int v, int w);
        void BFS(int s);
};

Graph::Graph(int V){
    this->V = V;
    adj.resize(V);
}

void Graph::insertEdge(int v, int w){
    adj[v].push_back(w);
}

void Graph::BFS(int s){
    vector<bool> visited;
    list<int> queue;

    visited.resize(V, false);

    visited[s] = true;
    queue.push_back(s);

    while(!queue.empty()){
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        for(auto adjacent: adj[s]){
            if(!visited[adjacent]){
                queue.push_back(adjacent);
                visited[adjacent]=true;
            }
        }
    }
}

int main(){
    Graph g(4);
    g.insertEdge(0, 1);
    g.insertEdge(0, 2);
    g.insertEdge(1, 2);
    g.insertEdge(2, 0);
    g.insertEdge(2, 3);
    g.insertEdge(3, 3);
    g.BFS(1);
    return 0;
}

