#include<bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define uint unsigned long long

uint simple_factorial(int x){
  int res = 1;
  int i = x; 
  while(i--){
    res *= x;
    x--;
  }
  return res;
}
uint simple_nCr(int n, int r){
  // additional case
  if(r==0 || r==n) return 1;
  if(r>n) return 0;

  // converting global funciton into f
  typedef uint (*sf)(int x);
  sf f = simple_factorial;

  return f(n) / ( f(r) * f(n-r) );
}

uint nCrWithHelpOfGcd(int n, int r){
  
  uint p = 1; // holds n * n-1 * n-2 ...
  uint k = 1; // holds r * r-1 * r-2....

  cout << "p " << p << nl;
  if(r==0){
    return 1;
  }

  if( (n-r) < r)
    r = n-r;


  while(r){
    p *= n;
    k *= r;

    uint m = __gcd(p, k);
    p /= m;
    k /= m;

    n--;
    r--;
  }

  cout << "p " << p << nl;
  return p;
}

int32_t main(){
    cout << "simple factorial of 5 :" << simple_factorial(5) << nl;
    cout << "simple 5c3: " << simple_nCr(5, 3) << nl;
    cout << "simple factorial of 100: " << simple_factorial(100) << nl;
    // below code fails with overflow
    // cout << "simple 100c60: " << simple_nCr(100, 63) << nl;

    cout << "with help of gcd 100c60: " << nCrWithHelpOfGcd(4, 2) << nl;
    return 0;
}