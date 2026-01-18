// Author: MDhruv03
// Problem: 1872D
// Time: 17:47 on 18/01/2026

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
        ll n ,x, y;
        cin >> n >> x >> y;

        ll sum = n/x;
        ll sub = n/y;
        ll redundant = n / lcm(x,y);

        sum-=redundant;
        sub-=redundant;

        ll result = ((2*n - sum +1)*sum/2) - (sub*(sub+1))/2;
        cout << result << '\n';
    }

    return 0;
}