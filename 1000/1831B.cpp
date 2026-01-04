// Author: MDhruv03
// Time: 16:15 on 04/01/2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        unordered_map<int, int> mpa, mpb;

        // Process array a
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && a[j] == a[i]) j++;
            int len = j - i;
            mpa[a[i]] = max(mpa[a[i]], len);
            i = j;
        }

        // Process array b
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && b[j] == b[i]) j++;
            int len = j - i;
            mpb[b[i]] = max(mpb[b[i]], len);
            i = j;
        }

        int maxi = 0;

        // Check values from a
        for (auto &p : mpa) {
            int val = p.first;
            maxi = max(maxi, p.second + mpb[val]);
        }

        // Check values only in b
        for (auto &p : mpb) {
            int val = p.first;
            maxi = max(maxi, p.second + mpa[val]);
        }

        cout << maxi << '\n';
    }

    return 0;
}
