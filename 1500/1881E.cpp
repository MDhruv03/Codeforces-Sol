// Author: MDhruv03
// Problem: 1881E
// Time: 16:39 on 21/02/2026

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
        cin >> n;
        vector<int> arr(n);
        for(int &x: arr)
            cin >> x;
        vector<int> dp(n+1);
        dp[n] = 0;
        for(int i=n-1;i>=0;i--)
        {
            dp[i] = dp[i+1] + 1;

            int j = i + arr[i] + 1;
            if(j<=n)
                dp[i] = min(dp[i],dp[j]);
        }

        cout << dp[0] << endl;
    }

    return 0;
}