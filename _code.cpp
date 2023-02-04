#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
typedef vector<int> VI;
typedef vector<VI> VVI;
#define ll long long
typedef unsigned long long int  uint64;
const int mx = 100;
int prime[mx+1];

// jodi 0 hoy tahole sheta prime
// jodi 1 hoy not a prime

void sieve(){
    for(int i = 2; i<=mx; i++){
        if(prime[i]==0){
            for(int j = 2; j*i<=mx; j++){
                prime[i*j] = 1;
            }
        }
    }
    for(int i=2; i<mx; i++){
        if(prime[i]==0)
            cout << i << " ";
    }
}

int main(){
    sieve();
    return 0;
}