// Author: MDhruv03
// Problem: 1285B
// Time: 12:36 on 01/02/2026

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
        vector<ll> a(n);
        for(ll &x : a) cin >>x;

        ll total = accumulate(a.begin(), a.end(), 0LL);
        ll temp = 0;
        ll best=LLONG_MIN;
        bool flag = false;
        for(int i=0;i<n-1;i++)
        {
            temp= max (a[i],temp + a[i]);
            best=max(best,temp);
        }
        temp=0;
        for(int i=1 ;i<n;i++){
            temp= max (a[i],temp + a[i]);   
            best=max(best,temp);
        }

        cout << (best>=total ? "NO" : "YES") << endl;
    }

    return 0;
}