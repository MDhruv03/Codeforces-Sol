// Author: MDhruv03
// Problem: 1931D
// Time: 12:13 on 26/01/2026

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
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        map<ll,vector<ll>> mp;
        for(int i=0;i<n;i++)
            mp[a[i]%y].push_back(a[i]);
        
        ll answer=0;    

        for(auto it : mp)
        {
            vector<ll> vals = it.second;
            map<ll,ll> mp2;
            for(auto &v : vals)
                mp2[v%x]++;
            
            for(auto it2 : mp2)
            {
                if(it2.first == 0 || (it2.first == x/2 && x%2==0))
                {
                    answer+= (it2.second * (it2.second - 1)) / 2;
                    it2.second = 0;
                }
                else
                {
                    ll count1 = it2.second;
                    ll count2 = mp2[x - it2.first];
                    answer += count1 * count2;
                    mp2[x - it2.first] = 0;
                }
            }
        }

        cout << answer << '\n';
    }

    return 0;
}