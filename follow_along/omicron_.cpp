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
    unsigned long long int tc = 1;
    while(T--){
      unsigned long long int a,b,c,k;
      cin >> a >> b >> c>> k;
      unsigned long long int x1 = 0;
      unsigned long long int x2 = 0;

      if (a < b) {
          std::swap(a, b);
      }
      if (a < c) {
          std::swap(a, c);
      }
      if (b < c) {
          std::swap(b, c);
      }


    /// inserting into extra cups
    // cout << " a b c now: " <<  cout << a << " " << b << " " << c << endl;
    // cout << a << " " << b << " " << c << endl;

    a -= k;
    x1 = k;

    b -= k;
    x2 = k;

    c += x1;
    b += x2;

    cout << "Case "<< tc <<": ";
    if(a==b && b == c){
      cout << "Peaceful";
    }else{
      cout << "Fight";
    }

    cout << endl;

    tc++;
    }
    return 0;
}