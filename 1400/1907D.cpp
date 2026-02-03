// Author: MDhruv03
// Problem: 1907D
// Time: 20:24 on 03/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool search(vector<pair<ll,ll>>& a, ll x) {
    ll left=0,right=0;
    for(int i=0;i<a.size();i++) {
        left-=x;
        right+=x;

        int reachL=max(a[i].first,left);
        int reachR=min(a[i].second,right);

        if(reachL>reachR)
            return false;

        left=reachL;
        right=reachR;    
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
         ll n;
        cin >> n;
        vector<pair<ll,ll>> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i].first;
            cin >> a[i].second;
        }

        int low = 0, high = 1e9;
        while (low < high) {
            ll mid = (low + high)  / 2;
            if (search(a, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        cout << low << endl;
    }

    return 0;
}