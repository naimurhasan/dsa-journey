#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
     
    long long totalNumber, totalPair; //
    cin>> totalNumber >> totalPair;
    vector<pair<int, int>> pairs;
    int ans;
    set<int> ns;
    for(int i = 0; i<totalNumber; i++){
        int x;
        ns.insert(x);
    }
    for(int i = 0; i<totalPair; i++){
        int x, y;
        cin >> x, y;
        pair<int, int> pq(x, y);
        pairs.push_back(pq);
    }
    // if(totalPair==1){

    // }
//     int numbers[totalNumber],pairs[totalPair],i,j,count; //
//     for( i=0;i<totalNumber;i++){
//         cin >> numbers[i];
//     }
//     for( j=0;i<totalPair*2;j++){
//         cin>>pairs[j];
//         if(pairs[j]==numbers[i]){
//         count++;
// }
//     }
//     cout << count << endl;
    
    return 0;
}