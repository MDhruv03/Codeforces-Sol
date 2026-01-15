// Author: MDhruv03
// Problem: 1791G1
// Time: 22:07 on 15/01/2026

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
        int n;
        ll c;
        cin >> n >> c;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        // cost[i] = a[i] + (i+1)
        vector<ll> cost(n);
        for (int i = 0; i < n; ++i) cost[i] = a[i] + (i + 1);

        sort(cost.begin(), cost.end());

        ll total = 0;
        int teleports = 0;
        for (int i = 0; i < n; ++i) {
            if (total + cost[i] <= c) {
                total += cost[i];
                teleports++;
            } else break;
        }

        cout << teleports << '\n';
    }

    return 0;
}