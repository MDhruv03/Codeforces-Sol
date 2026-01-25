// Author: MDhruv03
// Problem: 1514B
// Time: 14:38 on 25/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const ll MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll n,k;
        cin >> n >> k;
        ll result=1;
        for(int i =0 ;i<k;i++)
        {
            result = (result * n) % MOD;
        }
        cout << result << '\n';
    }

    return 0;
}