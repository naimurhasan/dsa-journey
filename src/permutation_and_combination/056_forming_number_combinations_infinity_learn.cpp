#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    // int nums[5] = {0,1,2,3,4};
    // how many combinations can we make with picking 3
    // if repeatation not allowd?
    // __________________   _____       ____
    // 5 ways to fill first 4 ways lef  3 ways left
    int ans = 1;
    int flag = 5;
    int pick = 3;
    cout << "5 ";
    for(int i=0; i < pick; i++){
      cout  << " * " << flag;
      ans = ans*flag;
      flag--;
    }
    cout << endl;
    cout << "In '" << ans << "' Ways we can form ";
    cout << "number, from '5' elements by picking '";
    cout << pick << "' numbers";

    cout << endl;
    cout << "If repeatations are allowed: " << endl;
    ans = 1;
    pick = 3;
    while(pick--){
      ans *= 5;
    }

    cout << "'" << ans << "'" << endl;
    return 0;
}