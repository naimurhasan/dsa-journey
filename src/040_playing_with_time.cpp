#include<iostream>
#include<ctime>
#include <iomanip>
using namespace std;

class Watch{
  protected:
  string timezone_offset_text() {
    time_t zero = 0;
    const tm* lt = localtime( &zero );
    int unaligned = lt->tm_sec + ( lt->tm_min + ( lt->tm_hour * 60 ) ) * 60;
    int to = (lt->tm_mon ? unaligned - 24*60*60 : unaligned)/3600;
    string tos = "GMT";
    tos += (to>0 ? "+" : (to==0) ? "": "-");
    tos+= to_string(to);
    
    return tos;
}
  public:
  int hour, minute;
  string timeZone;
  Watch(int hour, int minute, string timeZone){
      this->hour = hour;
      this->minute = minute;
      this->timeZone = timeZone;
  }
  Watch(){
    time_t t = time(0);   // get time now
    tm* now = localtime(&t);
    this->hour = (now->tm_hour);
    this->minute = (now->tm_min);
    this->timeZone = "GMT+6";
    time_t zero = time(0);
    tm* now = localtime(&zero);
    cout << "tm_hour " << now->tm_hour << endl; 
    cout << "tm_isdst " << now->tm_isdst << endl;
    cout << "tm_mon " << now->tm_mon << endl;
    cout << "tm_mday " << now->tm_mday << endl;
    cout << "tm_min " << now->tm_min << endl;
    cout << "tm_min " << now->tm_min << endl;
    cout << "tm_sec " << now->tm_sec << endl;
    cout << "tm_wday " << now->tm_wday << endl;
    cout << "tm_yday " << now->tm_yday << endl;
    cout << "tm_year " << now->tm_year+1900 << endl;
  }
  void addMinute(int mn){
    minute+=mn;
    if(minute>59){
      int additionHour = minute/60;
      minute -= (additionHour*60);
      hour+=additionHour;
    }

    if(hour>12){
      int resethour = hour/12-1;
      hour = resethour;
    }
  }

  void display(){
    cout << (hour>12 ? hour%12 : hour+1) <<":"<<minute<<" "<<timeZone << endl;
  }
};

int main(){
  Watch watch;
  watch.addMinute(10);
  watch.display();  
  return 0;
}