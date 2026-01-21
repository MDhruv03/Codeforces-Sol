// Author: MDhruv03
// Problem: 1734C
// Time: 10:17 on 21/01/2026

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
        ll n;
        cin >> n;
        string s;
        cin >> s;

        vector<bool> used(n, false);
        ll cost=0;
        for(int k=1;k<=n;k++)
        {
            for(int i=k;i<=n;i+=k)
            {
                if(s[i-1]=='1') break;
                if(!used[i-1])
                {
                    cost+=k;
                    used[i-1]=true;
                }
            }
        }

        cout << cost << '\n';
    }

    return 0;
}