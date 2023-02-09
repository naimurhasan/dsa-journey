#include <iostream>
using namespace std;

int main(){
    int n, reverse = 0, lastDigit;
    
    cout<< "Enter the number: ";
    cin>>n;

    while (n>0)
    {
        lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n /= 10;
    }
    
    cout << reverse;
    
    return 0;
}
