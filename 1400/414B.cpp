// Author: MDhruv03
// Problem: 414B
// Time: 16:30 on 20/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    vector<vector<int>> factors(n+1);
    for(int i=1;i<=n;i++)
        for(int j=1;j*j<=i;j++)
        {
            if(i%j==0)
            {
                factors[i].push_back(j);
            if(i/j!=j)
                factors[i].push_back(i/j);  
            }  
        }
    vector<vector<int>> dp(k+1,vector<int>(n+1,0));
    for(int i=1;i<=n;i++)
        dp[1][i]=1;

    for(int i=2;i<=k;i++)
        for(int j=1;j<=n;j++)
        {
            dp[i][j]=0;
            for(int x: factors[j])
                dp[i][j]=(dp[i][j]+dp[i-1][x])%MOD;
    }
    int ans=0;
    for(int i=1;i<=n;i++)    
        ans=(ans+dp[k][i])%MOD;
    cout << ans << endl;
    return 0;
}