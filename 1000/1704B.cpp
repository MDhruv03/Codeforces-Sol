// Author: MDhruv03
// Time: 22:26 on 27/08/2025

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
int n; ll x;
        cin >> n >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        ll lower = a[0] - x;
        ll upper = a[0] + x;
        int changes = 0;

        for (int i = 1; i < n; ++i) {
            ll L = a[i] - x;
            ll R = a[i] + x;
            if (L > upper || R < lower) {
                ++changes;
                lower = L;
                upper = R;
            } else {
                lower = max(lower, L);
                upper = min(upper, R);
            }
        }
        cout << changes << endl;
}

    return 0;
}