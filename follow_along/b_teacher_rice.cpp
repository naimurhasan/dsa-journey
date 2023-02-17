#include<bits/stdc++.h>
using namespace std;
#define int long long
#define uint unsigned long long

#define dout cout

int32_t main(){
    uint l, r, b, k;
    cin>> l >> r >> b>> k;
    uint a = min(l, r);
    uint wt;
    if(a<b || a%b==0){
      int mmax = max(a, b);
      wt = mmax*k;
    }else{
      uint singleWaitingTime = b * ( (a/b) + 1);
      wt = singleWaitingTime*k;
    }

    cout << wt;
    
    return 0;
}