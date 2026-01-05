// Author: MDhruv03
// Time: 23:21 on 04/01/2026

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
        string s;
        cin >> s;
        vector<ll> prefix(n+1,0);
        for (int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+(s[i]=='W');
        }
        ll mini=INT_MAX;
        for(int i=0;i<=n-k;i++)
        {
            ll cnt=prefix[i+k]-prefix[i];
            mini=min(mini,cnt);
        }
        cout << mini << endl; 
}

    return 0;
}