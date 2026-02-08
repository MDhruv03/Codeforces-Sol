// Author: MDhruv03
// Problem: 1692G
// Time: 12:25 on 08/02/2026

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
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll &x : a) cin>>x;

        vector<ll> ratio(n+1,0);
        ll count=0;
        for(ll i=1;i<n;i++)
        {
            if(a[i-1]/a[i] < 2)
                {
                    count++;
                }
            else
                count=0;
            ratio[i]=count;    
        }

        ll ans=0;
        for(ll i=1;i<n;i++)
        {
            if(ratio[i]>=k)
                ans++;
        }
        cout<<ans<<endl;

    }

    return 0;
}