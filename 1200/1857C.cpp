// Author: MDhruv03
// Problem: 1857C
// Time: 18:02 on 18/01/2026

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
        ll n;
        cin >> n;
        ll m = n*(n-1)/2;
        vector<ll> b(m);
        for(int i=0;i<m;i++)
            cin >> b[i];
        
        sort(b.begin(),b.end());
        int x =n - 1,i=0;
        while(x>0)
        {
            cout << b[i] << " ";
            i+=x;
            x--;
        }
        cout << 1000000000 << '\n';    
    }

    return 0;
}