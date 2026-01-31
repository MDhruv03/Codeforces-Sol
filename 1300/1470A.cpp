// Author: MDhruv03
// Problem: 1470A
// Time: 12:18 on 31/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll n,m;
        cin >> n >> m;
        vector<int> k(n);
        for(int i=0;i<n;i++)
            cin >> k[i];
        vector<int> cost(m);
        for(int i=0;i<m;i++)
            cin >> cost[i];
            
        sort(k.rbegin(),k.rend());
        ll total=0;
        ll index=0;
        for(int i=0;i<n;i++)
        {
            if(index<m && cost[index]<cost[k[i]-1])
            {
                total += cost[index];
                index++;
            }
            else
                total += cost[k[i]-1];
        }
        cout << total << endl;
    }

    return 0;
}