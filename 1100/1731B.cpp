// Author: MDhruv03
// Problem: 1731B
// Time: 09:32 on 16/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
ll const MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;

        cout << ((n * (n + 1))% MOD *(4 * n - 1)%MOD * 337) % MOD << '\n';
    }

    return 0;
}