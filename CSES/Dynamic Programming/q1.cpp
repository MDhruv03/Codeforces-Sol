// Author: MDhruv03
// Problem: q1
// Time: 09:50 on 18/03/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
const int mod = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for(int j=1;j<=6;j++)
            if(i-j>=0)
                dp[i] = (dp[i] + dp[i - j]) % mod;
    }
    cout << dp[n] << endl;
    return 0;
}