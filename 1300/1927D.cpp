// Author: MDhruv03
// Problem: 1927D
// Time: 18:33 on 26/01/2026

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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> prev(n, -1);
        for(int i = 1; i < n; i++) {
            if(a[i]!=a[i-1])
                prev[i] = i-1;
            else
                prev[i] = prev[i-1];    
        }

        int q;
        cin >> q;
        while(q--) {
            int l, r;
            cin >> l >> r;
            if(prev[r-1] >= l-1)
                cout << r << " " << prev[r-1] + 1 << endl;
            else
                cout << -1 << " " << -1 << endl;
    }
    cout << endl;
}
    return 0;
}