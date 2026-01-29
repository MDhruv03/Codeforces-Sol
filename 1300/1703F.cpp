// Author: MDhruv03
// Problem: 1703F
// Time: 22:09 on 28/01/2026

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
        for(ll &x : a) cin >>x;
        set<ll> indexes;
        ll count=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]<i+1)
            {
                count++;
                indexes.insert(count);
            }
        }
        ll result=0;
        for(auto it : indexes)
        {
            result+=(count-it);
        }

        cout << result << endl;
    }

    return 0;
}