#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
typedef vector<int> VI;
typedef vector<VI> VVI;
#define ll long long
typedef unsigned long long int  uint64;
#define mx 100005
VI p;

void sieve(){
    bool prime[mx+1];
    memset(prime, 0, sizeof(prime));
    for(int i=2;i<mx;i++){
        if(prime[i]==0){
            p.push_back(i);

            for(int j=2; i*j<=mx; j++){
                prime[i*j] = 1;
            }
        }
    }
    ;
}

int phi(ll n){
    int result = n;
    for(int i = 0; p[i]*p[i]<=n; i++){
        if(n%p[i]==0){
            while(n%p[i]==0)
                n/=p[i];

            result -= result/p[i];
        }
    }
    if(n>1)
        result -= result/n;
    return result;
}

int main(){
    sieve();
    cout << phi(10);
    return 0;
}