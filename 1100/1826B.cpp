// Author: MDhruv03
// Problem: 1826B
// Time: 11:00 on 14/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
ll gcd (ll a, ll b) 
{ return b == 0 ? a : gcd(b, a % b); }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i=0;i<n;i++) cin >> a[i];
        int l=0, r=n-1;

        int num=0;
        while(l<=r)
        {
            num =gcd(num, abs(a[r] - a[l]));
            l++;
            r--;
        }
        cout << num << endl;

    }

    return 0;
}