// Author: Naimur Hasan
// Date: 18-12-22
// unsolved
#include<bits/stdc++.h>

using namespace std;

void l() {}
template<typename Head, typename ...Args>
void l(const Head& head, const Args&... args) {
    cout << head << endl;
    l(args...);
}

int carryCounter(unsigned int x,unsigned int y){
  int carry = 0;
  int carryCount = 0;
  unsigned int b = max(x, y);
  unsigned int c = min(x, y);

  while(b){
    int rem1 = b % 10;
    int rem2 = c % 10;
    int sum = rem1 + rem2 + carry;
    if(sum>9){
      carry = sum/10;
      carryCount++;
    }
    else{
      carry = 0;
    }
    b /= 10;
    c /= 10;

  }
  return carryCount;
}

int main(){ 
  int x, y;
  while (true)
  {
    cin >> x >> y;
    if(x==0 && y==0) break;
    int carry = carryCounter(x, y);
    if(carry==0) cout << "No carry operation." << endl;
    else if(carry==1) cout << "1 carry operation." << endl;
    else cout << carry << " carry operations." << endl;
  }
  
}
