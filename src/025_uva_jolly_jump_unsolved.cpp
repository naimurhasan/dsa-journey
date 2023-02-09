// Author: Naimur Hasan
// Date: 17-12-22
// unsolved
#include<bits/stdc++.h>

using namespace std;

void LOG() {}

template<typename Head, typename... Args>
void LOG(const Head& head, const Args&... args )
{
    std::cout << head << " ";
    LOG(args...);
}



int main(){
    int N;
    while(cin >> N){
        int lastDigit;
        int digitNow;
        int numDiff;
        int flag = 1;
        int seq_diff = 0;
        for(int i = 0; i<N; i++){
            cin >> digitNow;
            LOG("Digit ", "Now ", digitNow);
            if(i==0){
                lastDigit = digitNow;
            }else if(i == 1){
                numDiff = abs(lastDigit-digitNow);
                LOG("NUM DIFF1 ", numDiff);
                lastDigit = digitNow;
            }else if(i==2){
                int diffNow = abs(lastDigit-digitNow);
                seq_diff = (numDiff - diffNow);
                numDiff = diffNow;
                LOG("NUM DIFF ", numDiff);
                LOG("SQ DIFF ", seq_diff);
                lastDigit = digitNow;
            }else{
                int diffNow = abs(lastDigit-digitNow);
                int sqDiffNow = (numDiff - diffNow);
                numDiff = diffNow;
                if(sqDiffNow!=seq_diff){
                    flag = 0;
                    break;
                }
                LOG("NUM DIFF ", numDiff);
                LOG("SQ DIFF ", seq_diff);
                lastDigit = digitNow;
            }
            
            LOG("\n\n\n");
        }
        if(flag){
            cout << "Jolly" << endl;;
        }else{
            cout << "Not jolly" << endl;
        }
    }
}
