// Author: MDhruv03
// Problem: temp
// Time: 21:10 on 29/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const ll MASK = (1LL<<31) - 1;

    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll x,y; cin>>x>>y;
        ll p = x & ((~y) & MASK);
        ll q = y;
        cout << p << " " << q << "\n";
    }

    return 0;
}