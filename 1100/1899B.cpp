// Author: MDhruv03
// Time: 10:51 on 11/01/2026

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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (ll &x : a) 
            cin >> x;
        
        vector<ll> prefix(n);
        prefix[0]=a[0];
        for(int i=1;i<n;i++)
            prefix[i]=prefix[i-1]+a[i];
        
        ll ans=0;
        for(ll k=1;k<=n;k++) 
        {
            if(n%k!=0) continue;
            ll start=k-1;
            ll result=0;
            ll maxi=prefix[start];
            ll mini=prefix[start];
            for(ll i = start+k; i < n; i += k) 
            {
                ll currentSum = prefix[i] - prefix[i - k];
                maxi = max(maxi, currentSum);
                mini = min(mini, currentSum);
            }
            ans=max(ans, maxi - mini);
        }   

        cout << ans << endl;
}

    return 0;
}