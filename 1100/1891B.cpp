// Author: MDhruv03
// Time: 12:59 on 11/01/2026

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
        int n, q;
        cin >> n >> q;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> x(q);
        for (int i = 0; i < q; i++) {
            cin >> x[i];
        }

        ll maxi=31;
        for (int i = 0; i < q; i++) {
            if(x[i] >= maxi)
                continue;
            
            ll val = pow(2, x[i]);
            for(int j=0;j<n;j++) 
            {
                if(a[j] % val == 0) 
                {
                    a[j] += val / 2;
                }
            }
            maxi = x[i];   
        }

        for (ll v : a) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}