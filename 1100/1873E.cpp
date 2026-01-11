// Author: MDhruv03
// Time: 14:23 on 11/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool check(vector<ll>& a, ll mid, ll x) {
    ll sum = 0;
    for (ll i = 0; i < a.size(); i++) {
        if(a[i] < mid) {
            sum += (mid - a[i]);
        }
    }
    return sum <= x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int tt;
  cin >> tt;
    while (tt--){
        ll x,n;
        cin >> n >> x;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll start=1,end=1e12;
        ll ans=0;
        while(start <= end)
        {
            ll mid = start + (end - start) / 2;
            if(check(a,mid,x))
            {
                ans=mid;
                start=mid+1;
            }
            else
                end=mid-1;
        }
        cout << ans << endl;
}

    return 0;
}