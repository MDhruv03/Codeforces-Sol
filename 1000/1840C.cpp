// Author: MDhruv03
// Time: 16:11 on 04/01/2026

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
         int n, k, q;
        cin >> n >> k >> q;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll ways = 0;
        ll cnt = 0;  // length of current valid segment

        for (int i = 0; i < n; i++) {
            if (a[i] <= q) {
                cnt++;
            } else {
                if (cnt >= k) {
                    ll x = cnt - k + 1;
                    ways += x * (x + 1) / 2;
                }
                cnt = 0;
            }
        }

        // handle last segment
        if (cnt >= k) {
            ll x = cnt - k + 1;
            ways += x * (x + 1) / 2;
        }

        cout << ways << '\n';


}

    return 0;
}