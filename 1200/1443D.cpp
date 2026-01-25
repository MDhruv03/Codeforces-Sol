// Author: MDhruv03
// Problem: 1443D
// Time: 17:01 on 25/01/2026

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
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int u = -1, v = -1;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                u = 0;
                v = i;
                break;
            }
        }
        if (u == -1) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        cout << u + 1 << " " << v + 1 << "\n";
        for (int i = 0; i < n; i++) {
            if (i == u || i == v) continue;

            if (a[i] == a[u]) {
                cout << i + 1 << " " << v + 1 << "\n";
            } else {
                cout << i + 1 << " " << u + 1 << "\n";
            }
        }
    }

    return 0;
}