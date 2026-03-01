// Author: MDhruv03
// Problem: temp
// Time: 14:50 on 01/03/2026

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
        bool flag = false;
        for (int i = 0; i < n-1; i++) {
            if(a[i]>a[i+1]){
                flag = true;
                break;
            }
        }
        cout << (!flag ? n : 1) << endl;
    }

    return 0;
}