#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int  uint64;
#define int long long


int lucasNcR(int n, int r){
  int MAX = 100;
  int ncr[MAX][MAX];
  ncr[0][0] = 0;
  int limncr = 10;
  
  int i, j;
  for(i = 1; i <=limncr; i++){
    for(j = 0; j <=limncr; j++){
      if(j>i) ncr[i][j] = 0;
      else if(j==i || j==0) ncr[i][j]=1;
      else ncr[i][j] = ncr[i-1][j-1] + ncr[i-1][j];
    }
  }
  cout << ncr[n][r];
}

int32_t main(){
   lucasNcR(5, 3);
    return 0;
}