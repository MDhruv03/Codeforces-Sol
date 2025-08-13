// Author: MDhruv03
// Time: 20:15 on 10/08/2025

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

        int n; cin >> n;
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 1) cout << -1;
            else {
                if (i == n) cout << 2;
                else cout << 3;
            }
            if (i < n) cout << " ";
        }
        cout << endl;
}

    return 0;
}