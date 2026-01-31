// Author: MDhruv03
// Problem: 1364B
// Time: 13:32 on 31/01/2026

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
        vector<ll> result;
        result.push_back(a[0]);
        for(int i=1;i<n-1;i++)
        {
            if((a[i-1]-a[i])*(a[i]-a[i+1])<0)
                result.push_back(a[i]);
        }
        result.push_back(a[n-1]);
        cout << result.size() << endl;
        for(auto x : result)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}