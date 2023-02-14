#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
typedef vector<int> VI;
typedef vector<VI> VVI;
#define ll long long
typedef unsigned long long int  uint64;

int main(){
    int T;
    cin >> T;
    map<string, int> bg;
    bg["A+"] = 0;
    bg["A-"] = 0;
    bg["AB+"] = 0;
    bg["AB-"] = 0;
    bg["B+"] = 0;
    bg["B-"] = 0;
    bg["O+"] = 0;
    bg["O-"] = 0;

    map<string, int> yc;

    map<string, pair<string, string>> duplicates;
        
    char c;
    scanf("%c", &c);
    while(T--){
      string dt, em, yy, tbg;
      cin >> dt >> em >> yy >> tbg;
      
      if(duplicates.count(em)){
        yc[duplicates[em].first]--;
        bg[duplicates[em].second]--;
        pair<string, string> pp;
        pp.first = yy.substr(6, 4);
        pp.second = tbg;
        duplicates[em] = pp;
      }else{
        pair<string, string> pp;
        pp.first = yy.substr(6, 4);
        pp.second = tbg;
        
        duplicates[em] = pp;
      }

      bg[tbg]++;
      
      if(yc.count(yy.substr(6, 4))){
        yc[yy.substr(6, 4)]++;
      }else{
        yc[yy.substr(6, 4)] = 1;
      }
      
    }

    for(auto v : bg){
      cout << v.first << " " << v.second << endl;
    }
    for(auto v : yc){
      cout << v.first << " " << v.second << endl;
    }
    return 0;
}