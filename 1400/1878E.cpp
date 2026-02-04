// Author: MDhruv03
// Problem: 1878E
// Time: 17:21 on 04/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int range(int l,int r,vector<vector<ll>> &prefix)
{
    int ans=0;
    for(int i=0;i<30;i++)
        {
            if(prefix[i][r+1]-prefix[i][l]==0)
                ans+=(1<<i);
        }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<vector<ll>> prefix(30, vector<ll>(n + 1, 0));
        for (ll bit = 0; bit < 30; bit++) {
            prefix[bit][0] = 0;
            for (ll i = 0; i < n; i++) {
                prefix[bit][i + 1] = prefix[bit][i] + ((a[i] & (1 << bit)) ? 0 : 1);
            }
        }
        ll q;
        cin >> q;
        while(q--)
        {
            ll left,k;
            cin >> left >> k;
            left--;
            ll low=left,high=n-1;
            if(a[left]<k)
            {
                cout << -1 << ' ';
                continue;
            }

            while(low<high)
            {
                ll mid = (low+high+1)/2;
                ll val = range(left,mid,prefix);
                if(val>=k)
                    low=mid;
                else
                    high=mid-1;
                
            }
            cout << low+1 << ' ';  
    }
    cout << '\n';
}
    return 0;
}
