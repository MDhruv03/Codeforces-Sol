// Author: MDhruv03
// Problem: 1742E
// Time: 22:47 on 20/01/2026

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
        ll n,q;
        cin >> n >> q;
        vector<ll> steps(n);
        vector<ll> queries(q);
        for(int i=0;i<n;i++)
            cin >> steps[i];
        for(int i=0;i<q;i++)
            cin >> queries[i];

        vector<ll> mx(n), pref(n);
        mx[0] = steps[0];
        pref[0] = steps[0];

        for (int i = 1; i < n; i++) {
            mx[i] = max(mx[i - 1], steps[i]);
            pref[i] = pref[i - 1] + steps[i];
        }

        for (int i = 0; i < q; i++) {
            int idx = upper_bound(mx.begin(), mx.end(), queries[i]) - mx.begin() - 1;
            if (idx < 0) cout << 0 << " ";
            else cout << pref[idx] << " ";
        }
        cout << '\n';  
    }

    return 0;
}