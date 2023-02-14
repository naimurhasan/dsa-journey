#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef unsigned long long int uint64;
#define int long long

int32_t main(){
    int N;
    cin >> N;
    map<string, int> blood_group{
      {"A+", 0},
      {"A-", 0},
      {"AB+", 0},
      {"AB-", 0},
      {"B+", 0},
      {"B-", 0},
      {"O+", 0},
      {"O-", 0},
    };
    map<int, int> ys;
    set<int> uys;

    map<string, tuple<int, int, int, int, int, int, string, int>> dataSet; 

    while(N--){
      char x;
      int day, month, year, hour, min, sec, bd, bm, by;
      string email, blood;
      cin >> day >> x >> month >> x >> year >> x >> hour >> x >> min >> x >> sec >> x >> email >> x >> bd >> x >> bm >> x >> by >> blood;
      tuple<int, int, int, int, int, int, string, int> item(year, month, day, hour, min, sec, blood, by);        
      if(dataSet.find(email)==dataSet.end()){
        dataSet[email] = item;
        uys.insert(by);
      }else{
        /// user has previous entry lets decide which one to keep
        int oDay, oMonth, oYear, oHour, oMin, oSec;
        auto data = dataSet[email];
        oYear = get<0>(data);
        oMonth = get<1>(data);
        oDay = get<2>(data);
        oHour = get<3>(data);
        oMin = get<4>(data);
        oSec = get<5>(data);
        
        if(year < oYear){
          continue;
        }else if (year>oYear){
          dataSet[email] = item;
          continue;
        }else{
          if(month<oMonth){
            continue;
          }else if(month>oMonth){
            dataSet[email] = item;
            continue;
          }else{
            if(day<oDay){
              continue;
            }else if(day>oDay){
              dataSet[email] = item;
              continue;
            }else{
              if(hour<oHour){
                continue;
              }else if(hour>oHour){
                dataSet[email] = item;
                continue;
              }else{
                if(min<oMin){
                  continue;
                }else if(min>oMin){
                  dataSet[email] = item;
                  continue;
                }else{
                  if(sec<oSec){
                    continue;
                  }else if(sec>oSec){
                    dataSet[email] = item;
                    continue;
                  }
                }
              }
            }
          }
        }
      }
    }

    // int years
    for(auto item : uys){
      ys[item] = 0;
    }

    // calc bg
    for(auto item : dataSet){
      string bg = get<6>(item.second); 
      blood_group[bg]++;
    }

    // calc years
    for(auto item : dataSet){
      int yy = get<7>(item.second); 
      ys[yy]++;
    }

    for(auto item: blood_group){
      cout << item.first << " " << item.second << endl;
    }
    for(auto item: ys){
      cout << item.first << " " << item.second << endl;
    }
    return 0;
}