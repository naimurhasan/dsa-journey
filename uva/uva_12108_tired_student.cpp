#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
typedef vector<int> VI;
typedef vector<VI> VVI;
#define ll long long
typedef unsigned long long int  uint64;
#define int long long
#define uint unsigned long long
#define nl endl
// std::ofstream dev_null("/dev/null");
// std::ostream &dout = dev_null;
// std::ostream &dout = cout;
int a[15], b[15], c[15];
int n, tc;
const int BIG = 1e5;

void solve(){
    for(int i = 1; i<=n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    for(int i = 1; i<=BIG; i++){
        int wake = 0;
        for(int j = 1; j<=n; j++)
            if(c[j]<=a[j]) wake++;
        
        if(wake==n){
            cout << "Case " << ++tc << ": " << i;
            break;
        }else if(i==BIG){
            cout << "Case " << ++tc << ": " << -1;
            break;
        }

        for(int j=1; j<=n; j++){
                if(c[j]==a[j]+b[j] || (c[j] == a[j] && (wake >= n-wake))) 
                    c[j] = 0;
                c[j]++;
            }
    }

    cout << nl;
}

int32_t main(){
    while(1){
        cin >> n;
        if(n==0) break;
        solve();  
    } 
    return 0;
}

