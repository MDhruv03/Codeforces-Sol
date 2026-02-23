// Author: MDhruv03
// Problem: 1795C
// Time: 20:30 on 23/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<ll> a(n+1);
        vector<ll> b(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];
        vector<ll> prefix(n+1, 0);
        for (int i = 1; i <= n; i++)
            prefix[i] = prefix[i-1] + b[i];

        vector<ll> count(n+2, 0),answer(n+1, 0);
       for (int i = 1; i <= n; i++) {
    ll target = prefix[i-1] + a[i];

    int idx = upper_bound(prefix.begin() + i, prefix.begin() + n + 1, target) - prefix.begin();

    count[i]++;
    count[idx]--;

    if (idx <= n)
        answer[idx] += target - prefix[idx-1];
}  

        for (int i = 1; i <= n; i++) {
            count[i] += count[i-1];
            answer[i] += count[i] * b[i];
        }

        for (int i = 1; i <= n; i++) cout << answer[i] << " ";
        cout << endl;
    }

    return 0;
}