// Author: MDhruv03
// Problem: 1671C
// Time: 19:16 on 22/01/2026

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
        ll n,x;
        cin >> n >> x;
        vector<ll> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];

        sort(arr.begin(),arr.end());
         long long ans = 0;
        long long prefix = 0;

        for (int i = 0; i < n; i++) {
            prefix += arr[i];
            if (prefix > x) break;

            ans += (x - prefix) / (i + 1) + 1;
        }

        cout << ans << '\n';
    }

    return 0;
}