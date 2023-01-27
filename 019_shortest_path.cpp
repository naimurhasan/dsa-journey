/*
NAIMUR Learnt the Dijkstra Algo From "Shafayat Blog
https://iishanto.com/dijkstra-algorithm-bangla-tutorial/
Apr 24, 2020 02: 14 PM
*/
#include<bits/stdc++.h>

using namespace std;
struct Node{
    Node(int u,int d){
        at=u;
        distance=d;
    }
    int at,distance;
};

bool operator < (Node A,Node B){
    return A.distance>B.distance;
}
/*Main function*/
int main()
{

    int MAX_NODES, MAX_EDGES;
    int source_node;
    int destination_node;
    int currentFuel;

    cin >> MAX_NODES >> MAX_EDGES;

    vector <Node> adjacency_list[MAX_NODES+1];
    int cost[MAX_NODES+1][MAX_NODES+1]={-1};
    for(int inputLineCounter = 1; inputLineCounter<=MAX_EDGES; inputLineCounter++){
        int s,d,f;
        cin >> s >> d >> f;
        adjacency_list[s].push_back(Node(d,INT_MAX));
        cost[s][d]=f;

        if(inputLineCounter==1){
            source_node = s;
        }
        if(inputLineCounter==MAX_EDGES){
            destination_node=d;
        }
    }
    cin >> currentFuel;


    priority_queue <Node> pq;
    pq.push(Node(source_node,0)); 

    int saved_distance[MAX_NODES+1];
    for(int i=1;i<=MAX_NODES;i++) saved_distance[i]=INT_MAX;
    saved_distance[source_node]=0;

    while(!pq.empty()){
        Node u=pq.top();
        pq.pop();
        for(auto v:adjacency_list[u.at]){
            if(saved_distance[v.at]>saved_distance[u.at]+cost[u.at][v.at]){
                v.distance=u.distance+cost[u.at][v.at];
                saved_distance[v.at]=v.distance;
                pq.push(v);
            }
        }
    }
// display distance
//    for(int i=1;i<MAX_NODES+1;i++){
//        cout<<"distance from " << source_node << " to "<<i<<" is "<<saved_distance[i]<<endl;
//    }
    if(saved_distance[destination_node]<=currentFuel){
        cout << "You will be there!!";
    }else{
        cout << "I am sorry!!!";
    }
    return 0;
}
