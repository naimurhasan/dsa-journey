#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
typedef vector<int> VI;
typedef vector<VI> VVI;
#define ll long long
typedef unsigned long long int  uint64;
#define int long long
#define uint unsigned long long
// std::ofstream dev_null("/dev/null");
// std::ostream &dout = dev_null;
std::ostream &dout = cout;

void solve(string &s){
  sort(s.begin(), s.end());
  cout << s << endl;
  while( next_permutation(s.begin(), s.end()) ){
    cout << s << endl;
  }
}

int32_t main(){
    string s = "bca";
    solve(s);
    return 0;
}