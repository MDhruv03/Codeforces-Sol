// Author: MDhruv03
// Time: 16:48 on 11/01/2026

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
        int n,k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        
        sort(a.begin(), a.end());

        vector<ll> prefix(n,0);
        prefix[0] = a[0];
        for (int i = 1; i <n; i++) {
            prefix[i] = prefix[i-1] + a[i];
        }

        ll total = prefix[n-1];
        ll ans =0;

        for(int i=0;i<=k;i++){
            if(2*i >n)
                break;
            int removeBig = k-i;
            if(removeBig > n - 2*i)
                continue;
                ll removedSmall = (2*i > 0 ? prefix[2*i - 1] : 0);
                ll removedBig = (removeBig > 0 ? total - prefix[n - removeBig - 1] : 0);
                ll cur = total - removedSmall - removedBig;
                ans = max(ans, cur);
        }
        cout << ans << endl;
}

    return 0;
}