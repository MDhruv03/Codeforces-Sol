// Author: MDhruv03
// Problem: 1797B
// Time: 21:45 on 15/01/2026

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
        int n,k;
        cin >> n >> k;
        vector<vector<int>> a(n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin >> a[i][j];

        int mismatch=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(a[i][j]!=a[n-1-i][n-1-j])
                    mismatch++;
        
        mismatch/=2;

        if(mismatch>k)  cout << "NO" << '\n';
        else if((k - mismatch) % 2 == 0 || n % 2 == 1) cout << "YES" << '\n';
        else cout << "NO" << '\n';
         
    }

    return 0;
}