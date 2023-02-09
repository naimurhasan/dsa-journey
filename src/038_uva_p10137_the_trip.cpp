
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n){
        vector<double> pays;
        double total = 0, exchange = 0, needToPay;
        for(int i = 0; i<n; i++){
            double amount;
            cin >> amount;
            total += amount;
            pays.push_back(amount);
        }
        
        needToPay = total/n;
            
        double extraPaid = 0, lessPaid = 0;
        for(int i = 0; i<n; i++){
            double adjustment = (pays[i] - needToPay) * 100.0;
            adjustment = ( (long) adjustment) / 100.0;
            if(adjustment > 0) extraPaid += adjustment;
            else lessPaid += abs(adjustment);
        }
        
        if(extraPaid > lessPaid)
            exchange = extraPaid;
        else
            exchange = lessPaid;
        printf("$%.2f\n", exchange);    
        cin >> n;
    }
    return 0;
}
