// Author: Naimur Hasan
// Date: 17-12-22
// unsolved
#include<bits/stdc++.h>

using namespace std;

void l() {}
template<typename Head, typename ...Args>
void l(const Head& head, const Args&... args) {
    cout << head << endl;
    l(args...);
}

int getOddsSum(int n, int m){
    int sum = 0;
    for(int i = n; i<=m; i++ ){
        if(i%2 == 1){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int T, t;
    cin >> t;
    T = t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int sum = getOddsSum(n, m);
        cout << "Case " << T-t << ": " << sum << endl;
    }
}
