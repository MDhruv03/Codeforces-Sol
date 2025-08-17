// Author: MDhruv03
// Time: 14:53 on 15/08/2025

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
        int n,k,q;
        cin >> n >> k >> q;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int l=0;
        int r=0;
        int ways=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<k)
            {
                r++;
                continue;
            }
            else if(r-l+1>=k){
                ways += (r-l+1-k)*(r-l+1-k+2)/2;
                l=i+1;
                r=i+1;
            }
        }
        if(r-l+1>=k){
            ways += (r-l+1-k)*(r-l+1-k+2)/2;
        }

        cout << ways << endl;
}

    return 0;
}