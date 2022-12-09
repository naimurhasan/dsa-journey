/*
Naimur
*/
#include<bits/stdc++.h>
#define gap << " " <<
using namespace std;

struct Node{
    Node(int a, int b){
        at=a;
        distance=b;
    }
    int at, distance;
};

bool operator < (Node A, Node B){
    return A.distance > B.distance;
}

/*Main function*/
int main()
{
    freopen("019_input.txt", "r", stdin);
    int MAX_NODES, MAX_EDGES;
    cin >> MAX_NODES >> MAX_EDGES;
    int saved_distance[MAX_NODES];
    for(int i = 0; i<MAX_NODES; i++) saved_distance[i] = INT_MAX;
    vector <Node> adjacencyList[MAX_NODES];
    int cost[MAX_NODES][MAX_NODES];

    for(int i = 0; i<MAX_EDGES; i++){
        int s, d, f;
        cin >> s >> d >> f;
        adjacencyList[s].push_back(Node(d, INT_MAX));
        cost[s][d] = f;
    }

    // print adjacents
    // for(int i = 0; i<MAX_NODES;i++){
    //     cout << "["<<i<<"] ";
    //     for(auto v: adjacencyList[i]){
    //         cout << v.at << " ";
    //     }
    //     cout << endl;
    // }
    
    return 0;
}