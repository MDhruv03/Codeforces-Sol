// Author: MDhruv03
// Problem: 1420B
// Time: 19:47 on 25/01/2026

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
        for(ll &i : arr) cin >>i;

        vector<ll> maxSetBits(31,0);
        ll answer=0;
        for(int i=0;i<n;i++)
        {
            for(int j=30;j>=0;j--)
            {
                if((arr[i] & (1<<j)))
                {
                    maxSetBits[j]++;
                    break;
                }
            }
        }

        for(int i=0;i<31;i++)
        {
            answer+=maxSetBits[i] * (maxSetBits[i]-1)/2;
        }

        cout << answer << '\n';
    }

    return 0;
}