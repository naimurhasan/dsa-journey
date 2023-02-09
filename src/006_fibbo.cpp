#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n, t1=0, t2=1, nextTerm, i;
    cout<< "Enter the number: ";
    cin>>n;
    for(i=0; i<n;i++){
        cout << t1 << " ";
        nextTerm = t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return 0;
}
