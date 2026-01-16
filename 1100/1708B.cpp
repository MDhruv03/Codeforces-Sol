// Author: MDhruv03
// Problem: 1708B
// Time: 09:52 on 16/01/2026

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
        ll n,l,r;
        cin >> n >> l >> r;
        vector<ll> a;

        bool possible=true;
        for(int i=1;i<=n;i++)
            {
                ll multiplier = ((l + i - 1) / i )* i;
                a.push_back(multiplier);
                if(multiplier>r)
                {
                    cout << "NO" << '\n';
                    possible=false;
                    break;
                }
            }
        if(!possible)
            continue;
        cout << "YES" << '\n';
        for(int i=0;i<n;i++)
            cout << a[i] << ' ';
        cout << '\n';
    }

    return 0;
}