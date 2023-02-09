#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
typedef vector<int> VI;
typedef vector<VI> VVI;
#define ll long long
typedef unsigned long long int  uint64;


void phi_up_to(int n){
    int phi[n+1];
    phi[0] = 0;
    phi[1] = 1;
    for(int i=2;i<=n; i++){
        phi[i] = i -1;
    }

    for(int i = 2; i<=n; i++){
        for(int j = i*2; j<=n; j+=i){
            phi[j] -= phi[i];
        }
    }

    for(int i = 0; i<=n; i++){
        cout << i << " = " << phi[i] << endl;
    }
}
int main(){
    phi_up_to(30);
    return 0;
}