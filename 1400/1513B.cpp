// Author: MDhruv03
// Problem: 1513B
// Time: 18:45 on 10/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const ll MOD=1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> factorial(2e5+1,1);
    for(ll i=1;i<2e5+1;i++)
        factorial[i]=factorial[i-1]*i%MOD;

    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll totalAnd=a[0];
        for(ll i=1;i<n;i++)
            totalAnd&=a[i];

        ll countAnd=count(a.begin(),a.end(),totalAnd);
        if(countAnd<2)
        {
            cout << 0 << endl;
            continue;
        }
        ll ans=(countAnd*(countAnd-1))%MOD;
        ans=(ans*factorial[n-2])%MOD;
        cout << ans << endl;
    }

    return 0;
}