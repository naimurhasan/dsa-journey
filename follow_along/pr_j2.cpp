#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
typedef vector<int> VI;
typedef vector<VI> VVI;
#define ll long long
typedef unsigned long long int  uint64;

int main(){
    int T;
    cin >> T;
    int tc = 1;
    while(T--){
      int M, K;
    cin >> M >> K;
    vector<int> times(M);
    for(int i = 0; i<M; i++){
      cin >> times[i];
    }

    int table[2][M];
    for(int i = 0; i<2; i++){
      for(int j = 0; j<M; j++){
        table[i][j] = 0;
      }
    }

    // 1st product calculate
    table[0][0] = 1;
    table[1][0] = table[0][0]+times[0]-1;

    // 1st
    for(int i = 1; i<M; i++){
      table[0][i] = table[1][i-1]+1;
      table[1][i] = table[0][i]+times[i]-1;
    }

    // kth product
    for(int ki = 1; ki<K; ki++){
      for(int i = 0; i<M; i++){
        if(i==0){
          // prothom employer jonyo kono special check ney
          table[0][0] = table[1][0]+1;
          table[1][0] = table[0][0]+times[0]-1;
        }
        else{
          table[0][i] = table[1][i-1]+1;
          if(table[0][i]<=table[1][i]){
            table[0][i] = table[1][i]+1;
          }
          table[1][i] = table[0][i]+times[i]-1;
        }
        
      }
    }

    cout << "Case "<<tc<<": ";
    cout << table[1][M-1];
    cout << endl;
      tc++;
    }
    

    // for(int i = 0; i<M; i++){
    //   cout << times[i] << " ";
    // }

    // cout << "----" << endl;
    // for(int i = 0; i<2; i++){
    //   for(int j = 0; j<M; j++){
    //     cout << table[i][j] << " ";
    //   }
    //   cout << endl;
    // }

    return 0;
}