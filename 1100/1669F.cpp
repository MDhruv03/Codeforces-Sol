// Author: MDhruv03
// Problem: 1669F
// Time: 10:30 on 16/01/2026

// Author: MDhruv03 (fixed)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    if (!(cin >> tt)) return 0;
    while (tt--) {
        int n;
        cin >> n;
        vector<ll> w(n);
        for (int i = 0; i < n; ++i) cin >> w[i];

        int l = 0, r = n - 1;
        ll alice_sum = 0, bob_sum = 0;
        int alice_moves = 0, bob_moves = 0;
        int ans = 0;

        while (l <= r) {
            if (alice_sum <= bob_sum) {
                alice_sum += w[l++];
                ++alice_moves;
            } else {
                bob_sum += w[r--];
                ++bob_moves;
            }
            if (alice_sum == bob_sum) {
                ans = max(ans, alice_moves + bob_moves);
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
