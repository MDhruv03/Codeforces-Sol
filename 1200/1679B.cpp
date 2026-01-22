// Author: MDhruv03
// Problem: 1679B
// Time: 22:02 on 21/01/2026

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
        ll n,q;
        cin >> n >> q;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        while(q--)
        {
            ll t , i x;
            cin >> t >> i >> x;
            if(t==1)
            {
                arr[i-1]=x;
                ll sum = accumulate(arr.begin(), arr.end(), 0LL);
                cout << sum << " " << '\n';
            }
            else
            {
                
            }
        }    
    }

    return 0;
}