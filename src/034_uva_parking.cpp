#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    
    cin >> T;
    
    while (T--)
    {
        int N;
        cin >> N;
        int stores[N];
        
        for (int i = 0; i < N; i++)
        {
            int pos;
            scanf("%d", &pos);
            stores[i] = pos;
        }
        sort(stores, stores + N);
        cout << (stores[N - 1] - stores[0])*2  << endl;
    }
}