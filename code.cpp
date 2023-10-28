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

void solve() {
	int n, carCount = 0, carry = 0;
	cin >> n;
	int threeCount = 0;
	int twoCount = 0;
	int oneCount = 0;

	// store input
	for(int i = 0; i<n; i++){
		int x; 
		cin >> x;
		if(x==4){
			carCount++;
		}else if(x==3){
			threeCount++;
		}else if(x==2){
			twoCount++;
		}else{
			oneCount++;
		}
	}

	if(threeCount==oneCount){
		carCount += threeCount;
		threeCount = 0;
		oneCount = 0;
	}

	if(threeCount>oneCount){
		carCount += oneCount;
		threeCount =- oneCount;
		carCount = threeCount;
	}

	if(threeCount<oneCount){
		carCount += threeCount;
		oneCount -= threeCount;
	}

	if(twoCount%2==0){
		carCount += (twoCount/2);
		twoCount = 0;
	}

	if(twoCount%2==1){
		carCount += (twoCount-1)/2;
	}

	if(oneCount==1){
		oneCount = 0;
		twoCount = 0;
		carCount++;
	}else if(oneCount==2){
		oneCount = 0;
		twoCount = 0;
		carCount++;
	}else if(oneCount>2){
			oneCount -= 2;
			twoCount = 0;
			carCount++;
	}


	if(oneCount<=4 && oneCount!=0){
		carCount++;
		oneCount == 0;
	}else if(oneCount>4){
		carCount += oneCount/4;
		carCount += (oneCount%4);
	}

	cout << carCount << endl;
}
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	ll t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
}