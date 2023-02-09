#include<bits/stdc++.h>
using namespace std;

void verify(string);

int main()
{
    int C;
    cin >> C;
    std::string line;
    std::getline(std::cin, line);
    while(C--){
      std::string line;
      std::getline(std::cin, line);
      // cout << "CHECKING : '" << line <<"'" << endl;
      verify(line);
      cout << endl;
    }
    return 0;
}

void verify(string inp){
    stack<char> s;
    map<char, char> m;
    m[')'] = '(';
    m['}'] = '{';
    m[']'] = '[';
    
    for(int i = 0; i<inp.size(); i++){
        char b = inp[i];
        if(b=='(' || b=='{' || b=='['){
            s.push(b);
        }else{
            if(s.empty()){
                cout << "No";
                return;
            }else{
               if(m[b]!=s.top()){
                    cout << "No";
                    return;
                }
                s.pop();
            }
        }
    }
    
    if(s.empty()){
        cout << "Yes";
    }else{
       cout << "No";
    }
}