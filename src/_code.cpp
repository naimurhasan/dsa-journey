#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
typedef vector<int> VI;
typedef vector<VI> VVI;
#define ll long long
typedef unsigned long long int  uint64;

void clearBitsInRange(int &n, int i, int j){
  int a = (~0)<<j+1;
  int b = (1<<i)-1;
  int mask  = a|b;
  n = n&mask;
}

int main(){
    int n = 31;
    int i = 1;
    int j = 3;
    clearBitsInRange(n, i, j);
    cout << n;


    return 0;
}