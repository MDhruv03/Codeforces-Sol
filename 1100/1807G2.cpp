// Author: MDhruv03
// Problem: 1807G2
// Time: 21:36 on 15/01/2026

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
        vector<ll> c(n);
        for (int i = 0; i < n; i++) cin >> c[i];

        sort(c.begin(), c.end());
        if(c[0]!=1)
        {
            cout << "NO" << '\n';
            continue;
        }

        ll sum=0;
        bool flag=true;
        for(int i=0;i<n-1;i++)
        {
            sum+=c[i];
            if(sum<c[i+1])
            {
                flag=false;
            }

        }
        cout << (flag ? "YES" : "NO") << '\n';   
}

    return 0;
}