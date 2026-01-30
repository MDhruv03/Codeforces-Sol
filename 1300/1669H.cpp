// Author: MDhruv03
// Problem: 1669H
// Time: 20:51 on 30/01/2026

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
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n);
        for(ll &x : a) cin >>x;

        vector<int> bits(32);
        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            ll temp = a[i];
            for(int j=0;j<32;j++)
            {
                if((temp>>j)&1)
                    bits[j]++;
            }
        }

        for(int i=30;i>=0;i--)
        {
            if(n-bits[i]<=k)
            {
                ans |= (1LL<<i);
                k -= n-bits[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}