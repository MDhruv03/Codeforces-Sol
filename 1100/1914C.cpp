// Author: MDhruv03
// Time: 15:06 on 09/01/2026

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
        int n,k;
        cin >> n >> k;
         vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
             cin >> a[i];
        for (int i = 0; i < n; i++)
             cin >> b[i];

        ll ans = 0;
        ll sumA = 0;
        ll bestB = 0;

        for (int i = 0; i < n && i < k; i++) {
            sumA += a[i];
            bestB = max(bestB, b[i]);

            ll remaining = k - (i + 1);
            ll total = sumA + remaining * bestB;
            ans = max(ans, total);
        }

        cout << ans << endl;
}   

    return 0;
}