/* Name: Naimur Hasan 
Date: 
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define uint unsigned long long
#define nl endl

int modular_multiplicative_inverse(int a, int mod){
  int q, b, r, t1 = 0, t2 = 1, t;
  // assign greater no to a
  if(mod>a){
    b = a;
    a = mod;
  }else{
    b = mod;
  }

  // we can't find a modular if gcd is not 1
  // or a,b not relatively coprime
  if(__gcd(a,b)!=1){
    return 0;
  }

  while(b!=0){
    q = a/b;
    r = a%b;
    t = t1 - (t2*q);
      
    t1 = t2;
    t2 = t;
    a = b;
    b = r;
    
  }

  // in rare case
  // if we get a negative
  if(t1<0){
    // by adding actually we are subtracting
    // because t1 is already neg sign
    t1 = mod+t1; 
  }

  return t1;

}

int32_t main(){
    int a, mod;
    // cin >> a >> mod;
    a = 4;
    mod = 5;
    int res = modular_multiplicative_inverse(a, mod);
    cout << res;
    return 0;
}