// Author: MDhruv03
// Problem: 1350B
// Time: 10:35 on 13/02/2026

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
        ll n;
        cin >> n;
        vector<ll> sizes(n+1);
        for(int i=1;i<=n;i++)
            cin >> sizes[i];
        vector<ll> dp(n+1,1);
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    if(sizes[i]>sizes[j])
                        dp[i]=max(dp[i],dp[j]+1);
                    ll k = i/j;
                    if(k!=j && sizes[i]>sizes[k])
                        dp[i]=max(dp[i],dp[k]+1);    
                }
            }
        }
        cout << *max_element(dp.begin(),dp.end()) << endl;
    }

    return 0;
}