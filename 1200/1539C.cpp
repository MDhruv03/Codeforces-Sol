// Author: MDhruv03
// Problem: 1539C
// Time: 18:25 on 24/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        ll n,k,x;
        cin >> n >> k >> x;
        vector<ll> a(n);
        for(ll &i : a) cin >> i;

        sort(a.begin(), a.end());
        vector<ll> diffs;
        for(int i = 1; i < n; ++i){
            if(a[i] - a[i-1] > x){
                diffs.push_back(a[i] - a[i-1]);
            }
        }

        int ans = diffs.size() + 1;
        sort(diffs.begin(), diffs.end());
        for(ll diff : diffs){
            ll need = diff / x - (diff % x == 0) - 1;
            if(need <= k){
                k -= need;
                ans--;
            }
        }

        cout << ans << '\n';

    return 0;
}