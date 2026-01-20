// Author: MDhruv03
// Problem: 1808B
// Time: 11:24 on 20/01/2026

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
        int n,m;
        cin >> n >> m;
        vector<vector<ll>> cards(m,vector<ll>(n));
        for(int j=0;j<n;j++)
            for(int i=0;i<m;i++)
                cin >> cards[i][j];


       for(int i=0;i<m;i++){
            sort(cards[i].begin(),cards[i].end());
       }
         ll ans = 0;
         for(int i=0;i<m;i++)
         {
            for(int j=0;j<n;j++)
            {
                ans-=(cards[i][j] * (n-1-j));
                ans+= (cards[i][j] * j);
            }
         }

         cout << ans << '\n';
    }

    return 0;
}