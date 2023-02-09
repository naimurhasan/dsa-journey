// Author: Naimur Hasan
// Date: 21-12-22
// unsolved
#include<bits/stdc++.h>
#include<unistd.h>

using namespace std;

void l() {}
template<typename Head, typename ...Args>
void l(const Head& head, const Args&... args) {
    cout << head << " ";
    l(args...);
}

long long int getReverse(long long int n){
  string s = to_string(n);
  reverse(s.begin(), s.end());
  // int reverse = 0;
  // while (n) {
  //   int remainder = n % 10;
  //   reverse = reverse * 10 + remainder;
  //   n /= 10;
  // }
  return stoll(s);
}

int main() {
  int T;
  cin >> T;
  while(T--){
    long long int a;
    cin >> a;
    long long int sum = a + getReverse(a);
    int count = 1;
    while(sum!=getReverse(sum)){
      sum = sum + getReverse(sum);
      count++;
    }
    cout << count << " " << sum;
    cout << endl;
  }

  return 0;
}
