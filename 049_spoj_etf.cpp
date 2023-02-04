#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
typedef vector<int> VI;
typedef vector<VI> VVI;
#define ll long long
typedef unsigned long long int  uint64;

ll phi(ll n){
  int result = n;
  for(int p = 2; p*p<=n; p++){
    if(n%p==0){
      while(n%p==0)
        n/=p;
      result -= result/p;  
    }
  }

  if(n>1)
  result -= result/n;
  return result;
}

int main(){
    int t;
    cin >> t;
    while(t--){
      long int n;
      cin >> n;
      cout << phi(n) << endl;
    }
    return 0;
}