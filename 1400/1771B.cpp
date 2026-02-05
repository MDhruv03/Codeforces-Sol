// Author: MDhruv03
// Problem: 1771B
// Time: 18:25 on 05/02/2026

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
        int n , m;
        cin >> n >> m;
        vector<int> nearest(n+1,0);
        for(int i=0;i<m;i++)
        {
            int u,v;
            cin >> u >> v;
            if(u>v)
                swap(u,v);
            nearest[v]=max(nearest[v],u);
        }
        
        vector<int> dp(n+1);
        dp[1]=1;
        ll answer=1;
        for(int i=2;i<=n;i++)
        {
            dp[i]=max(dp[i-1],nearest[i]+1);
            answer+=i - dp[i] +1;
        }
        cout << answer << endl;
    }

    return 0;
}