// Author: MDhruv03
// Problem: 1780B
// Time: 09:02 on 16/01/2026

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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        ll total_sum=accumulate(a.begin(),a.end(),0LL);

        ll sum=0;
        ll ans=0;
        for(int i=0;i<n-1;i++)
        {
            sum+=a[i];
            ans=max(ans,__gcd(sum,total_sum - sum));
        }


        cout << ans << '\n';

    }

    return 0;
}