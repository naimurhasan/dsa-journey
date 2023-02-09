//UVa p11044 - Searching for Nessy
//Created by @naimurhasan
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    int placementCount = 1;

    while(T--){
        int m, n;
        cin >> m >> n;
        // removing borders
        m-=2;n-=2;
        int horizonalRequired = ceil(m/3.0);
        int vertiCalRequired = ceil(n/3.0);
        int res = horizonalRequired*vertiCalRequired;
        cout << res << endl;       

    }
    return 0;
}