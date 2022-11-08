#include <iostream>
using namespace std;

int main(){
    int n, i;
    bool flag = 1;
    
    cout<< "Enter the number: ";
    cin>>n;

    for(i=2; i*i<=n; i++){
        if(n%i==0){
            flag = 0;
            break;
        }
    }

    if(flag)
        cout << "Prime";
    else
        cout << "Not a Prime";
    
    return 0;
}
