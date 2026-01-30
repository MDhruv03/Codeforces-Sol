// Author: MDhruv03
// Problem: 1775B
// Time: 10:47 on 30/01/2026

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
        vector<vector<ll>> a;
        map<ll,ll> freq;
        for(ll i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            vector<ll> b(temp);
            for(ll j=0;j<temp;j++)
            {
                cin >> b[j];
                freq[b[j]]++;
            }
            a.push_back(b);
        }

        string ans="No";
        for(ll i=0;i<n;i++)
        {
            bool flag = true;
            for(auto x : a[i])
            {
               if(freq[x] == 1) {
                     flag = false;
                     break;
                }
            }
            if(flag)
            {
                ans="Yes";
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}