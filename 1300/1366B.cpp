// Author: MDhruv03
// Problem: 1366B
// Time: 13:10 on 31/01/2026

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
        ll n,x,m;
        cin >> n >> x >> m;
        ll left = x, right = x;
        for(ll i=0;i<m;i++)
        {
            ll l,r;
            cin >> l >> r;
            if(r<left || l>right)
                continue;
            left = min(left,l);
            right = max(right,r);
        }
        cout << right - left + 1 << endl;
    }

    return 0;
}