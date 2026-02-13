// Author: MDhruv03
// Problem: 1362C
// Time: 10:29 on 13/02/2026

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
        cout <<  2*n - __builtin_popcountll(n) << endl;
    }

    return 0;
}