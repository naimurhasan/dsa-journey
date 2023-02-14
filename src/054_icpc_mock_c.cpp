#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef unsigned long long int  uint64;

template <typename T>
T read(){
  T x;
  cin >> x;
  return x;
}

int main(){
    int T = read<int>();
    while(T--){
      int N = read<int>();
      vector<int> scores(N+1);
      vector<int> pens(N+1);
      map<int, int> penHolders;
      for(int i = 1; i<=N; i++){
        cin >> scores[i];
        pens[i] = i;
      }

      int Q = read<int>();
      while(Q--){
        int type = read<int>();
        if(type==1){
          int x, y;
          cin >> x >> y;
          if (pens[x]==0 || pens[y]==0){
            continue;
          }else if(scores[x]==scores[y]){
            continue;
          }else if(scores[y]>scores[x]){
            scores[y] += scores[x];
            pens[y] += pens[x];
            scores[x] = 0;
            pens[x] = 0;

            penHolders[x] = y;
          }
        }else if(type == 2){
           int x;
           cin >> x;
           cout << pens[x] << endl;
        }else{
           int x;
           cin >> x;
           cout << penHolders[x]  << endl;
        
        }
      }
    }
    return 0;
}