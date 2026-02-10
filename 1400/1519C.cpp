// Author: MDhruv03
// Problem: 1519C
// Time: 13:10 on 10/02/2026

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
        vector<ll> u(n),s(n);
        for(ll i=0;i<n;i++)
            cin >> u[i];
        for(ll i=0;i<n;i++)
            cin >> s[i];   

        vector<vector<ll>> skills(n);
        for(ll i=0;i<n;i++)
            skills[u[i]-1].push_back(s[i]);

        for(auto &skill:skills)
            sort(skill.begin(),skill.end());
        
        vector<vector<ll>> prefixSums(n,vector<ll>(1,0));
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<skills[i].size();j++)
            {
                prefixSums[i].push_back(prefixSums[i][j]+skills[i][j]);
            }
        }

        vector<ll> answer(n,0);
        for(ll i=0;i<n;i++)
        {
            ll nums = skills[i].size();
            for(ll k=1;k<=nums;k++)
            {
                ll rem = nums%k;
                answer[k-1]+=prefixSums[i].back() - prefixSums[i][rem];
            }
        }
        for(ll i=0;i<n;i++)
            cout << answer[i] << " ";
        cout << endl;

    }

    return 0;
}