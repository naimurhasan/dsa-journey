#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
typedef vector<int> VI;
typedef vector<VI> VVI;
#define ll long long
typedef unsigned long long int  uint64;

int main(){
    int i, fact = 1, n;
    // printf("Enter a number: ");
  //  freopen("input.txt","r",stdin);
  //  freopen("output.txt","w",stdout);

    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    // printf("Factorial of %d is: %d", n, fact);
    printf("%d", fact);
    return 0;
}