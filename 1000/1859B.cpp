// Author: MDhruv03
// Time: 20:19 on 14/08/2025

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

        vector<ll> mn(n), sec(n);
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            vector<ll> arr(m);
            for (int j = 0; j < m; j++) cin >> arr[j];
            sort(arr.begin(), arr.end());
            mn[i] = arr[0];
            sec[i] = arr[1];
        }

        ll sum_sec = 0;
        ll global_min = LLONG_MAX;
        ll global_sec_min = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            sum_sec += sec[i];
            global_min = min(global_min, mn[i]);
            global_sec_min = min(global_sec_min, sec[i]);
        }

        ll ans = sum_sec + global_min - global_sec_min;
        cout << ans << "\n";
    }
    return 0;
}