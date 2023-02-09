// Author: Naimur Hasan
// Date: 17-12-22
// unsolved
#include<bits/stdc++.h>

using namespace std;

void l() {}
template<typename Head, typename ...Args>
void l(const Head& head, const Args&... args) {
    cout << head << endl;
    l(args...);
}


int main(){ 
    char c;
    while(scanf("%c", &c)!=EOF){
        if(c=='\n')
            printf("\n");
        else
            printf("%c", c-7);
    }
}
