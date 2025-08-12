// Author: MDhruv03
// Time: 18:04 on 11/08/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int tt;
  cin >> tt;
    while (tt--){

        ll n,k,b,s;
        cin >> n >> k >> b >> s;
        ll maxi=k*b + (n)*(k-1);
        ll mini=k*b;
        if( mini>s|| s>maxi)
        {
            cout << -1 << endl;
        }
        else{
            vector<ll> ans(n, 0);
            ans[0] = mini;
            s -= mini;
            for (int i = 0; i < n; i++)
            {
                ll add = min(k-1,s);
                ans[i]+=add;
                s-=add;
            }

            for(int i=0;i<n;i++)
                cout << ans[i] << " ";
            cout << endl;    
        }
}

    return 0;
}