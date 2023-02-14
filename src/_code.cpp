#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
typedef vector<int> VI;
typedef vector<VI> VVI;
#define ll long long
typedef unsigned long long int  uint64;
#define MAX 1000000

int countBits(int n){
  // faster // iterate over only up to 1s
  int ans = 0;
  while(n>0){
    n = (n& (n-1));
    ans++;
  }
  return ans;
}

int main(){
  cout << countBits(15);
  return 0;
}