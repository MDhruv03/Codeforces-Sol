// Author: MDhruv03
// Problem: 1701C
// Time: 12:14 on 08/02/2026

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
        ll n,m;
        cin >> n >> m;
        vector<ll> freq(n,0);
        for(ll i=0;i<m;i++){
            ll x;
            cin >> x;
            freq[--x]++;
        }

        ll low=0,high = 2*m;
        while(low<high)
        {
            ll mid = (low+high)/2;
            ll maxpossible=0;
            for(ll &it : freq)
            {
                if(it>mid)
                   maxpossible+=mid;
                else
                     maxpossible+=it + (mid-it)/2;   
            }
            if(maxpossible>=m)
                high=mid;
            else
                low=mid+1;
        }
        cout<<low<<endl;
    }

    return 0;
}