// Author: MDhruv03
// Problem: 1692E
// Time: 18:52 on 21/01/2026

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
        ll n,s;
        cin >> n >> s;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin >> arr[i];

        map<int,int> prefixSum;
        
        prefixSum[0] = -1;
        ll sum=0;
        ll len=-1;
        for(ll i=0;i<n;i++)
        {
            sum+=arr[i];
            if(prefixSum.count(sum - s))
                len = max(len, i - prefixSum[sum - s]);
            if(!prefixSum.count(sum))
                prefixSum[sum] = i;
        }

        cout << (len == -1 ? -1 : n - len) << '\n';
    }

    return 0;
}