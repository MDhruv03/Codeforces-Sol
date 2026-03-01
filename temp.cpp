// Author: MDhruv03
// Problem: temp
// Time: 14:46 on 01/03/2026

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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int i =n-1;
        int count = 0;
        while(i >= 0 && a[i] ==a[n-1]) {
            i--;
            count++;
        }
        cout << count << endl;
    }

    return 0;
}