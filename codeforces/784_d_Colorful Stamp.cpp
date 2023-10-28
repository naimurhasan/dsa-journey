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

void solve()
{
	int n;
	string s;
	cin >> n;
	cin >> s;
	if (n == 1 && (s == "R" || s == "B"))
	{
		cout << "NO" << endl;
		return;
	}

	ll R = 0, B = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'W')
		{
			if (!((R == 0 && B == 0) || (R > 0 && B > 0))) // if both r,b==0 yes, other wise both have to more than zero 
			{
				cout << "NO" << endl;
				return;
			}
			R = 0, B = 0; // once w found count reset
		}
		else
		{
			if (s[i] == 'R')
				R++;
			else
				B++;
		}
	}
	if (!((R == 0 && B == 0) || (R > 0 && B > 0)))
	{
		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
}