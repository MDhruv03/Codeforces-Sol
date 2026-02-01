// Author: MDhruv03
// Problem: 1119B
// Time: 20:43 on 01/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        ll n,h;
        cin >> n >> h;
        vector<ll> a(n);
        for(ll &x : a) cin >>x;
        int low = 0, high = n-1;
        int ans = 0;
        while(low<=high)
        {
            int mid = (low + high)>>1;
            vector<ll> temp;
            for(int i=0;i<=mid;i++)
                temp.push_back(a[i]);
            sort(temp.begin(),temp.end()); 
            int height=0,i=mid;
            for(int j=mid;j>=0;j-=2)
            {
                height += temp[j];
                if(height>h)
                    break;
            }
            if(height<=h)
            {
                ans = mid;
                low = mid +1;
            }
            else
                high = mid -1;   
        }
        cout << ans +1 << endl;
    return 0;
}