// Author: MDhruv03
// Problem: 1679B
// Time: 18:45 on 22/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        ll n,q;
        cin>>n>>q;
        vector<pair<ll,ll>> arr(n,{0,0});
        for(int i=0;i<n;i++) cin >> arr[i].first;

        pair<ll,ll> globalValue = {0,-1};
        ll sum=accumulate(arr.begin(),arr.end(),0LL,[](ll s,const pair<ll,ll>& p){ return s + p.first; });
        for(int i=1;i<=q;i++)
        {
            ll type;
            cin>>type;
            if(type==1)
            {
                ll idx,x;
                cin >> idx >> x;
                idx--;
                if(arr[idx].second > globalValue.second)
                    sum += (x - arr[idx].first);
                else
                    sum += (x - globalValue.first);
                arr[idx] = {x,i};    
            }
            else{
                ll x;
                cin >> x;
                sum = n * x;
                globalValue = {x,i};
            }
            cout << sum << '\n';
        }

    return 0;
}