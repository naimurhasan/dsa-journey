#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n, fact=1;
    cout<< "Enter the number: ";
    cin >> n;
    while (n--)
    {
        fact *= n+1;
    }
    
    cout << fact;
    return 0;
}
