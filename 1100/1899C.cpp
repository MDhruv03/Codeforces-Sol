// Author: MDhruv03
// Time: 22:13 on 09/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int tt;
  cin >> tt;
    while (tt--){
int n;
        cin >> n;
        vector<ll> a(n);
        for (ll &x : a) cin >> x;

        ll sum = a[0], ans = a[0];

        int lastParity = abs(a[0]) % 2;

        for (int i = 1; i < n; i++) {
            int curParity = abs(a[i]) % 2;
            if (curParity != lastParity) {
                if (sum + a[i] >= a[i]) {
                    sum += a[i];
                } else {
                    sum = a[i];
                }
            } else {
                sum = a[i];
            }

            lastParity = curParity;
            ans = max(ans, sum);
        }

        cout << ans << endl;
    }
    return 0;
}