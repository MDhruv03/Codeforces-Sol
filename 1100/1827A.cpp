// Author: MDhruv03
// Time: 10:35 on 14/01/2026

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
        int n;
        cin >> n;
        vector<ll> a(n),b(n);

        for (int i=0;i<n;i++) cin >> a[i];
        for (int i=0;i<n;i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        // 1 2 3 4 5 6 8 9
        // 7 6 5 5 4 3 2 1 
        
        ll ans = 1;
        int j = n-1; 
        int used=0;
        for (int i = n-1; i >=0; i--) {
            while (j >=0 && a[j] > b[i])
                j--;

            ll greaterCount = (n - 1) - j;
            ll choices = greaterCount - used;

            if (choices <= 0) {
                ans = 0;
                break;
            }
            ans = (ans * choices) % MOD;
            used++;
        }

        cout << ans << '\n';
    }
    return 0;
}