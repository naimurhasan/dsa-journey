#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll phi(ll n){
	ll result = n;

	for(int p = 2; p*p<=n; ++p){

		if(n%p==0){

			while(n%p==0){
				n /= p;
			}

			result -= result/p;
		}

	}

	// If n has a prime factor greater than sqrt(n)
  // (There can be at-most one such prime factor)
	if(n>1)
		result -= result/n;

	return result;
}

int main(){
	for (int i = 1; i < 11; i++)
	{
		cout <<  "phi(" << i << "): " << phi(i) << endl;
	}
	return 0;
}