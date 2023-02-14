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
    int tc=1;
    while(T--){
      int M, K;
      cin >> M >> K;
      int sum = 0;
      int MAX = -1;
      for(int i = 0; i<M; i++){
        int x;
        cin >> x;
        sum += x;
        if(x>MAX){
          // if last num
          MAX = x;
        }
      }
      cout << "Case "<< tc <<": ";
      int addition = (K-1)*MAX;
      sum += addition;
      cout << sum << endl;
      tc++; 
    }   
    return 0;
}