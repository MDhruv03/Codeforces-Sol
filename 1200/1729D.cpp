// Author: MDhruv03
// Problem: 1729D
// Time: 10:46 on 21/01/2026

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
        ll n;
        cin >> n;
    vector<ll> expense(n);
    for(int i=0;i<n;i++)
        cin >> expense[i]; 
    vector<ll> budget(n);
    for(int i=0;i<n;i++)
        cin >> budget[i];

    vector<ll> total(n);
    for(int i=0;i<n;i++)
        total[i]=budget[i]-expense[i];

    sort(total.begin(), total.end());
    
    int l=0,r=n-1;
    ll ans=0;
    while(l<r)
    {
        if(total[l]+total[r]>=0)
        {
            ans++;
            l++;
            r--;
        }
        else
            l++;
    }

    cout << ans << '\n';
}
    return 0;
}

/*
8 3 9 2 4 5
5 3 1 4 5 10


-3 0 -8 2 1 5

-8 -3 0 1 2 5
*/