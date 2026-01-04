// Author: MDhruv03
// Time: 23:23 on 08/08/2025

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b) {
    while (b) {
        ll t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        ll n;
        cin >> n;

        ll best = 1;
        for (ll d = 1; d * d <= n; d++) {
            if (n % d == 0) {
                if (d <= n / 2) best = max(best, d);
                ll other = n / d;
                if (other <= n / 2) best = max(best, other);
            }
        }

        cout << best << " " << (n - best) << '\n';
    }

    return 0;
}
