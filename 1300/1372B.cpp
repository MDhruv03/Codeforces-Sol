// Author: MDhruv03
// Problem: 1372B
// Time: 12:58 on 31/01/2026

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
        bool flag = false;
        for(ll i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                ll k = n/i;
                cout << k << " " << n - k << endl;
                flag = true;
                break;
            }
        }
        if(!flag)
            cout << 1 << " " << n-1 << endl;
    }

    return 0;
}