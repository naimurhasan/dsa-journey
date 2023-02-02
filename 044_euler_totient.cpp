#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ui unsigned int
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)

lli gcd(lli a, lli b){
  if(b==0) return a;
  return gcd(b, a%b);
}

ui phi(lli n){
  ui ans = 1;
  FOR(i, 2, n, 1){
    if(gcd(i, n)==1) ans++;
  }
  return ans;
}

int main(){
  FOR(i, 1, 10, 1){
    cout << "Phi("<<i << "): "<< phi(i) << endl;
  }
  return 0;
}

