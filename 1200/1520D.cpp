// Author: MDhruv03
// Problem: 1520D
// Time: 11:27 on 25/01/2026

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
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            a[i]-=i;
        }
        map<ll,ll> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        ll ans=0;
        for(auto it:mp){
            ll count=it.second;
            ans+=count*(count-1)/2;
        }
        cout << ans << '\n';
    }

    return 0;
}