// Author: MDhruv03
// Problem: 1541B
// Time: 18:23 on 23/01/2026

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
        cin >>n;
        vector<pair<ll, ll>> a(n);
        for(ll i=0;i<n;i++){
            cin >> a[i].first;
            a[i].second = i+1;
        }

        sort(a.begin(), a.end());
        int pairs=0;
        for(ll i=0;i<n;i++)
        {
            for( ll j=i+1;j<n;j++)
            {
                if(a[i].first * a[j].first >= 2*n)
                    break;
                if(a[i].first * a[j].first == a[i].second + a[j].second)
                   pairs++;
            }
        }

        cout << pairs << '\n';

    }

    return 0;
}