// Author: MDhruv03
// Time: 17:39 on 26/10/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int n;
        cin >> n;
        for (int k = 1; k <= n; ++k) {
            if (k == 1) {
                cout << 0 << endl;
                continue;
            }
            ll total_cells = 1LL * k * k;                   
            ll total_pairs = total_cells * (total_cells - 1) / 2;
            ll attacking_pairs = 4LL * (k - 1) * (k - 2);
            cout << (total_pairs - attacking_pairs) << endl;
        }
    return 0;
}
