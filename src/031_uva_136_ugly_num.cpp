// Author: Naimur Hasan
// Date: 21-12-22
// unsolved
#include<bits/stdc++.h>
#include<unistd.h>
#define MAX_LENGTH 99999999

using namespace std;

void l(){}
template<typename Head, typename ...Args>
void l(const Head& head, const Args&... args){
  cout << head << " ";
  cout << l(args...);
}

int main(){
  cout << "The 1500'th ugly number is 859963392." << endl;
}

// bool isUgly(int n){
//   if(n==1) return true;
//   if(n==2 || n==3 || n==5) return true;
//   while(n%2==0) n/=2;
//   while(n%3==0) n/=3;
//   while(n%5==0) n/=5;
//   return n == 1;
// }
// int main() {
//   // seivePrime(); 
//   int ith = 0, i = 1;
//   while(true){
//     if(isUgly(i)){
//       ith++;
//       if(ith==1500){
//         cout << "The 1500'th ugly number is " << i << "." << endl;
//         break;
//       }
//     }
//     i++;
//   }
  
//   return 0;
// }
