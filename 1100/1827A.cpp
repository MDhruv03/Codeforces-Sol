#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long ans = 1;
        int j = 0; // number of a[] elements <= b[i]

        for (int i = 0; i < n; i++) {
            while (j < n && a[j] <= b[i]) {
                j++;
            }

            long long choices = (n - j) - i;
            if (choices <= 0) {
                ans = 0;
                break;
            }

            ans = (ans * choices) % MOD;
        }

        cout << ans << '\n';
    }
    return 0;
}
