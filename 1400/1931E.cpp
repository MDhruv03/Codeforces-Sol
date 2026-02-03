// Author: MDhruv03
// Problem: 1931E
// Time: 11:39 on 03/02/2026

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
        ll n,m;
        cin >> n >> m;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

       ll totalBits = 0;
    vector<ll> zeroes;

        for (ll x : a) {
            ll tz = 0;
            ll digits = 0;
            ll y = x;

            while (y % 10 == 0) {
                tz++;
                y /= 10;
                digits++;
            }
            while (y > 0) {
                digits++;
                y /= 10;
            }   
            zeroes.push_back(tz);
            totalBits += digits;
        }

sort(zeroes.begin(), zeroes.end(), greater<ll>());

for (int i = 0; i < n; i += 2)
    totalBits -= zeroes[i];

cout << (totalBits > m ? "Sasha\n" : "Anna\n");
  
    }

    return 0;
}