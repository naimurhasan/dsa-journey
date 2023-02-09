// Author: Naimur Hasan
// Date: 17-12-22
#include<bits/stdc++.h>

using namespace std;

long long int cycleCounter(long long int n){
    long long int counter = 1;
    while(n!=1){
        if(n%2==1){
            n = 3*n+1;
        }else{
            n /= 2;
        }
        counter++;
    }
    return counter;
}

int main(){
    long long int i, j, counter, n, max;
    while(cin >> i >> j){
       max = LONG_LONG_MIN;

       int di = i;
       int dj = j;
       if(i>j){
        int temp = i;
        i = j;
        j = temp;
       }
       for(long long int a = i; a<=j; a++){
            counter = cycleCounter(a);
            if(counter>max)
                max = counter;            
       }
       cout << di << " " << dj << " " << max << endl;
    }

    return 0;
}