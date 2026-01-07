// Author: MDhruv03
// Time: 19:06 on 07/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int tt;
  cin >> tt;
    while (tt--){

        ll a, b;
        cin >> a >> b;

        ll ans = LLONG_MAX;
        for (ll k = 0; k <= 60; ++k) {
            ll i = b + k;
            if (i == 1) continue;
            if (k >= ans) break;

            ll ops = k;      
            ll temp = a;
            while (temp > 0) {
                temp /= i;
                ++ops;
                if (ops >= ans) break;
            }
            ans = min(ans, ops);
        }
        cout << ans << endl;
}

    return 0;
}