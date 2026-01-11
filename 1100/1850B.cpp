// Author: MDhruv03
// Time: 15:32 on 11/01/2026

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
        ll n,c;
        cin >> n >> c;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll start=0,end=1e9;
        while(start <= end)
        {

            ll mid = start + (end - start) / 2;
            ll sum=0;
            for(ll i=0;i<n;i++){
                ll side = a[i] + 2 * mid;
                sum += (__int128)side * side;
                if (sum > c) 
                break;
            }
            if(sum == c){
                cout << mid << endl;
                break;
            }
            else if(sum < c)
                start=mid+1;
            else
                end=mid-1;    
        }
}

    return 0;
}