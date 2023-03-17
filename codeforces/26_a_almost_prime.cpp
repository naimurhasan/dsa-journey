/* Name: Naimur Hasan 
Date: 
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define uint unsigned long long
#define nl endl
const int MX = 1e7;
bool primes[MX+1] = {0};
vector<int> P;

// seive prime numbers
// seive almost prime numbers
// loop and count

void seive_prime_numbers(){
  for(int i = 2; i*i<=MX; i++){
    if(primes[i]==0){
       P.push_back(i);
       for(int j = i*i; j<MX; j+=i){
        primes[j] = 1;
       }
    }
  }
}

int32_t main(){
    seive_prime_numbers();
  
    int n;
    cin >> n;
    int ans = 0;
    if(n>5){
      for(int i = 6; i<=n; i++){
        int count = 0;
        for(int j = 0; P[j]<=n; j++){
          if(i%P[j]==0){
            count++;
          }
          if(count>2) break;
        }
        if(count==2){
          ans++;
        }
      }
    }
    cout << ans << nl;
    return 0;
}