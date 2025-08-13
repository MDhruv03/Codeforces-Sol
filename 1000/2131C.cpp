// Author: MDhruv03
// Time: 21:27 on 10/08/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll normalize(ll x, ll k) {
    ll r = x % k;
    if (r == 0 || (k % 2 == 0 && r == k/2)) return r;
    return min(r, k - r);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int tt;
  cin >> tt;
    while (tt--){
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> a(n), b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<ll> na, nb;
        na.reserve(n); nb.reserve(n);
        for (auto x : a) na.push_back(normalize(x,k));
        for (auto x : b) nb.push_back(normalize(x,k));

        sort(na.begin(), na.end());
        sort(nb.begin(), nb.end());

        cout << (na == nb ? "YES\n" : "NO\n");
    }


    return 0;
}