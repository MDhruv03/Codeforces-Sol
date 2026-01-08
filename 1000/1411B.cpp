// Author: MDhruv03
// Time: 18:05 on 08/01/2026

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
        ll n;
        cin >> n;
        for (ll i = n; ; i++) {
            string s = to_string(i);
            bool ok = true;

            for (char c : s) {
                ll d = c - '0';
                if (d == 0) continue;
                if (i % d != 0) {
                    ok = false;
                    break;
                }
            }

            if (ok) {
                cout << i << endl;
                break;
            }
        }
}

    return 0;
}