#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n, original = n, sum = 0, lastDigit, len;
    cout<< "Enter the number: ";
    cin>>n;
    len = floor(log10(abs(n)))+1;

    while (n>0)
    {
        lastDigit = n%10;
        sum += pow(lastDigit, len);
        n /= 10;
    }

    if(sum==original)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}
