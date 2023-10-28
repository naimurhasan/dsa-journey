#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <fstream>
#include <cassert>
#include <cstring>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <ctime>
#include <bitset>
#include <complex>
#include <random>
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
mt19937 gen(time(0));
const ll INF = 1e18;
 
vector<vector<ll>> G, G_rev;
vector<ll> ts;
 
void solve(){
	ll n, N;
    int counter = 0;
    vector<ll> arr;
    cin >> n;
    N=n;
    for(int i = 2; i*i<N; i++){
        if(n%i==0){
            counter++;
            arr.push_back(i);
            n = n/i;
        }

        if(counter==2){ // if all found then current n is the divisor
            arr.push_back(n);
            break;
        }
    }

    if(counter<2){ // if less than 3 divisor found 
        cout << "NO";
    }else if(arr[0]==arr[2] || arr[1]==arr[2]){ // 0, 1 should match the last
        cout << "NO";
    }else{
        cout << "YES" << endl;
        cout << arr[0] << " " << arr[1] << " " << arr[2];
    }

    cout << endl;
}
 
 
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	ll t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}