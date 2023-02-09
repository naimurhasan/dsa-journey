#include <iostream>
#include<math.h>
#define nl endl
using namespace std;

int sumOfNaturalN(int n){
    int ans = 0;
    while(n--){
        ans+= (n+1);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;   
    cout << sumOfNaturalN(n) << nl;
    return 0;
}
