// Author: MDhruv03
// Problem: 1821B
// Time: 11:13 on 14/01/2026

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
        vector<ll> a(n), b(n);
        for (ll &i : a) cin >> i;
        for (ll &i : b) cin >> i;

        int l=0,r=n-1;
        while(a[l]==b[l] && l<n) l++;
        while(a[r]==b[r] && r>=0) r--;

        while(l>=1 && b[l-1]<=b[l]) l--;
        while(r+1<n && b[r+1]>=b[r]) r++;

        cout << l+1 << " " << r+1 << '\n';
    }

    return 0;
}