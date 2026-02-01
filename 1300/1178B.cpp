// Author: MDhruv03
// Problem: 1178B
// Time: 15:58 on 01/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    ll n = s.length();
    vector<vector<ll>> dp(n+1,vector<ll>(4,0));
    for(int i=0;i<n;i++)
        dp[i][0] = 1;
    for(int i = 1;i<n;i++)
    {
        if(s[i]=='v' && s[i-1]=='v')
        {
            dp[i+1][1] += dp[i-1][0];
            dp[i+1][3] += dp[i-1][2];
        }
        else if(s[i]=='o')
        {
            dp[i+1][2] += dp[i][1];
        }
        dp[i + 1][1] += dp[i][1];
		dp[i + 1][2] += dp[i][2];
		dp[i + 1][3] += dp[i][3];
    }
    cout << dp[n][3] << endl;

    return 0;
}