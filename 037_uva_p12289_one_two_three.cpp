//UVa p12289 - One Two Three
//Created by @naimurhasan
#include <bits/stdc++.h>
using namespace std;

#include<iostream>
#include<queue>
using namespace std;

typedef struct Digit{
    string name;
    int count;
    int numeric;
    Digit(string n, int c, int nc){
        name = n;
        count = c;
        numeric = nc;
    }
} Digit;

bool operator < (Digit A, Digit B){
    return A.count < B.count;
}

void printDigit(string num){
    
    int len = num.size();
    
    if(len==3){
        Digit d1("one", 0, 1);
        Digit d2("two", 0, 2);
        Digit d6("six", 0, 6);
        priority_queue<Digit> dq;
        
        for(int i = 0; i<3; i++){
            char c = num[i];
            if(c==d1.name[i])
                d1.count++;
            if(c==d2.name[i])
                d2.count++;
            if(c==d6.name[i])
                d6.count++;
            dq.push(d1);
            dq.push(d2);
            dq.push(d6);
        }
        cout << dq.top().numeric << endl;  
    }else if(len==4){
        Digit d0("zero", 0, 0);
        Digit d4("four", 0, 4);
        Digit d5("five", 0, 5);
        Digit d9("nine", 0, 9);
        priority_queue<Digit> dq;
        
        for(int i = 0; i<3; i++){
            char c = num[i];
            if(c==d0.name[i])
                d0.count++;
            if(c==d4.name[i])
                d4.count++;
            if(c==d5.name[i])
                d5.count++;
            if(c==d9.name[i])
                d5.count++;
            dq.push(d0);
            dq.push(d4);
            dq.push(d5);
            dq.push(d9);
        }
        cout << dq.top().numeric << endl;  
    }else if(len==5){
        Digit d3("three", 0, 3);
        Digit d7("seven", 0, 7);
        Digit d8("eight", 0, 8);
        priority_queue<Digit> dq;
        
        for(int i = 0; i<3; i++){
            char c = num[i];
            if(c==d3.name[i])
                d3.count++;
            if(c==d8.name[i])
                d8.count++;
            if(c==d7.name[i])
                d7.count++;
            dq.push(d3);
            dq.push(d7);
            dq.push(d8);
        }
        cout << dq.top().numeric << endl;  
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        string num;
        cin >> num;
        printDigit(num);
    }
    return 0;
}