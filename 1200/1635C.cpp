// Author: MDhruv03
// Problem: 1635C
// Time: 10:28 on 23/01/2026

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
        vector<ll> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        if(arr[n-2] > arr[n-1])
            cout << -1 << '\n';
        else if(arr[n-1] >=0)
        {
            cout << n-2 << '\n';
            for(int i=1;i<=n-2;i++)
                cout << i << " " << n-1<< " " << n << '\n';
        }
        else
        {
            if(is_sorted(arr.begin(),arr.end()))
                cout << 0 << '\n';
            else
                cout << -1 << '\n';
        }     
    }

    return 0;
}