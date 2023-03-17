/* Name: Naimur Hasan 
Date: 
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define uint unsigned long long
#define nl endl

int myPow(int a, int b){
  int res = 1;
  while(b>0){
    if(a&1){
      res = res*a;
    }
    a = a*a;
    b >>= 1;
  }
  return res;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
     int n;
    cin >> n;
    int startOrEnd =2*4*3*myPow(4, n-3);
    int ifMiddle = (n-3)*4*3*3*myPow(4, n-4);
    cout << 
    (
      startOrEnd
      +
      ifMiddle
    )
     << endl;
    return 0;
}