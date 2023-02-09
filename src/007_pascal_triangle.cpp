#include <iostream>
#include<math.h>
using namespace std;

int fact(int n);
int nCr(int n, int r);

int main(){
    int n, r, c;
    cout << "Enter term: ";
    cin >> n;   
    for(r=0; r<=n; r++){
        for(c=0; c<=r; c++){
            cout << nCr(r, c) << " ";
        }
        cout << endl;
    }
    return 0;
}

int nCr(int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}

int fact(int n){
    int fact=1;
    while (n--)
    {
        fact *= n+1;
    }
    return fact;
}