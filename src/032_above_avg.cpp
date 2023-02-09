// Author: Naimur Hasan
// Date: 21-12-22
// unsolved
#include<bits/stdc++.h>
#include<unistd.h>
#define MAX_LENGTH 99999999
#define lli long long int

using namespace std;

void l(){}
template<typename Head, typename ...Args>
void l(const Head& head, const Args&... args){
  cout << head << " ";
  cout << l(args...);
}

int main(){
  int C;
  cin >> C;

  while(C--){
    int N;
    cin >> N;
    int sum = 0;
    int aboveAvg = 0;
    int marks[N];
    for(int i = 0; i<N; i++){
      int M;
      cin >> M;
      sum += M;
      marks[i] = M;
    }
    float avg = (float) sum / N;
    for(int i=0; i<N; i++){
      if(marks[i] > avg){
        aboveAvg++;
      }
    }
    float percentage = ( (float) aboveAvg / N) * 100;
    cout << fixed << setprecision(3) << percentage << "%" << endl;
  }
}
