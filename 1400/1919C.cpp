// Author: MDhruv03
// Problem: 1919C
// Time: 12:06 on 03/02/2026

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
        for( int &x : a)
            cin >> x;

        int ans = 0;
        int x = 1e9, y = 1e9;

        for (int v : a) {
            if(x>y)
                swap(x,y);
            if (v <= x) {
                x = v;
            } else if (v <= y) {
                y = v;
            } else {
                ans++;
                 x=v;
            }
        }
        cout << ans << '\n';
                    
    }

    return 0;
}