// Author: MDhruv03
// Problem: 1215B
// Time: 13:24 on 14/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
        
        vector<vector<int>> dp(n,vector<int>(2,0));    
        if(a[0]>0)
            dp[0][0] = 1;
        else
            dp[0][1] = 1;    
        for(int i=1;i<n;i++)
        {
            if(a[i]>0)
            {
                dp[i][0] = dp[i-1][0] +1;
                dp[i][1] = dp[i-1][1];
            }
            else
            {
                dp[i][0] = dp[i-1][1];
                dp[i][1] = dp[i-1][0] + 1;
            }
        }
        ll ans1=0;
        ll ans2=0;
        for(int i=0;i<n;i++)
        {
            ans1 += dp[i][0];
            ans2 += dp[i][1];
        }
        cout << ans2 << " " << ans1 << endl;
    return 0;
}