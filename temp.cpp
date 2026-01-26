// Author: MDhruv03
// Problem: temp
// Time: 20:45 on 25/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<char> has(n+1, 0);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int x : a) 
            if (x <= n) 
                has[x] = 1;

        vector<vector<int>> divs(n+1);
        for (int s = 1; s <= n; ++s) {
            if (!has[s]) continue;
            for (int m = s; m <= n; m += s) {
                divs[m].push_back(s);
            }
        }

        vector<int> dp(n+1, INF);


        if (has[1]) dp[1] = 1;
        for (int v = 1; v <= n; ++v) {
            for (int s : divs[v]) {
                if (s == v) {
                    dp[v] = 1;
                } else if (s == 1) {
                    continue;
                } else {
                    int prev = v / s;
                    if (dp[prev] != INF) dp[v] = min(dp[v], dp[prev] + 1);
                }
            }
        }
        for (int i = 1; i <= n; ++i) {
            if (dp[i] == INF) cout << -1;
            else cout << dp[i];
            if (i < n) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}