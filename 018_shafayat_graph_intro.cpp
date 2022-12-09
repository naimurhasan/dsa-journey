// Learning Graph in Details
#include<bits/stdc++.h>

using namespace std;

void n1_adjacencyMatrix(){
    /*
    http://www.shafaetsplanet.com/planetcoding/?p=184
    3 3  //3 node 3 edge
    1 2 5 //node1-node2-cost
    2 3 8
    1 3 3
   */
    int MAX_NODE, MAX_EDGE;
    int MATRIX[100][100];
    cin >> MAX_NODE >> MAX_EDGE;
    for(int i=0;i<MAX_EDGE;i++)
    {
        int n1,n2,cost;
        scanf("%d%d%d",&n1,&n2,&cost);
        MATRIX[n1][n2]=cost;
        MATRIX[n2][n1]=cost;
    }
    cout << "Enter path to check cost: ";
    int n1, n2;
    cin >> n1 >> n2;
    cout << "Cost: :" << MATRIX[n1][n2];
}


void n2_adjacencyList(){
    const int MAX = 1000;
    vector <int> edges[MAX];
    vector <int> cost[MAX];
    int MAX_NODE, MAX_EDGE;
    cin >> MAX_NODE >> MAX_EDGE;
    for(int i = 0; i<MAX_EDGE; i++){
        int x, y;
        cin >> x >> y;
        edges[x].push_back(y);
    }
    cout << "Get adjacency of: ";
    int n;
    cin >> n;
    int size=edges[n].size();
    for(int i=0; i < size ; i++)
        printf("%d ",edges[n][i]);
}

void n3_adjacencyExcercise(){
    int MAX = 100;
    vector<int> edges[MAX];
    int MAX_NODE = 4;
    edges[1].push_back(2);    
    edges[1].push_back(3);    
    edges[2].push_back(3);    
    edges[3].push_back(4);    
    edges[3].push_back(1); 
    edges[2].push_back(4);

    cout << "Printing all the adjacency: " << endl;
    for(int i = 1; i<=MAX_NODE; i++){
        cout << "["<<i<<"] : ";
        for(int j=0; j<edges[i].size(); j++){
            cout << edges[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    // n1_adjacencyMatrix();
    // n2_adjacencyList();
    n3_adjacencyExcercise();
    return 0;
}