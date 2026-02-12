// Author: MDhruv03
// Problem: 1374D
// Time: 17:42 on 11/02/2026

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
        cin >> n >> k;
        map<ll,ll> freq;
        ll count=0;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin >> x;
            if(x%k)
            {
            freq[k- x%k]++;
            count++;
            }
        }

        if(count==0)
        {
            cout << 0 << endl;
            continue;
        }

        ll rem=0;
        ll maxFreq=0;

        for(auto [x,y]:freq)
        {
            if(y>=maxFreq)
            {
                maxFreq=y;
                rem=x;
            }
        }

        cout << (maxFreq-1)*k+rem+1 << endl;
    }

    return 0;
}