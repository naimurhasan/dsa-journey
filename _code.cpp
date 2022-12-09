#include<bits/stdc++.h>

using namespace std;
struct Node{
    Node(int a,int b){
        at=a;
        distance=b;
    }
    int at, distance;   
};
bool operator < (Node A, Node B){
    return A.distance>B.distance;
}
int main(){
    /*
    5 7
    1 2 1
    1 4 2
    1 3 1
    2 5 7
    4 5 9
    3 4 1
    3 5 6
    */
    int MAX_NODE = 5;
    int MAX_EDGE = 7;
    int data[7][3] = {
        {1,2,1},
        {1,4,2},
        {1,3,1},
        {2,5,7},
        {4,5,8},
        {3,5,6}
    };


    return 0;
}