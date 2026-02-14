// Author: MDhruv03
// Problem: 1195C
// Time: 14:07 on 14/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int n;
        cin >> n;
        vector<ll> row1(n);
        vector<ll> row2(n);
        for(int i=0;i<n;i++)
            cin >> row1[i];
        for(int i=0;i<n;i++)
            cin >> row2[i];    
        vector<ll> dp1(n,0);
        vector<ll> dp2(n,0);
        dp1[0] = row1[0];
        dp2[0] = row2[0];

        for(int i=1;i<n;i++)
        {
            dp1[i] = max(dp1[i-1],dp2[i-1]+row1[i]);
            dp2[i] = max(dp2[i-1],dp1[i-1]+row2[i]);
        }
        cout << max(dp1[n-1],dp2[n-1]) << endl;
    return 0;
}