// Author: MDhruv03
// Problem: 1883G1
// Time: 10:35 on 04/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool check(vector<ll> a,vector<ll> b, ll deletions)
{   
    for(int i=0;i<deletions;i++)
    {
        a.pop_back();
        b.pop_back();
    }

    reverse(b.begin(),b.end());
    for(int i=0;i<a.size();i++)
    {
        if(a[i] >= b[i])
            return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll n,m;
        cin >> n >> m;
        vector<ll> a(n),b(n);
        a[0]=1;
        for(ll i=1;i<n;i++)
            cin >> a[i];
        for(ll i=0;i<n;i++)
            cin >> b[i];

      sort(a.begin(),a.end());
      sort(b.rbegin(),b.rend());
        ll low=0,high=n;
      while(low<high)
      {
        ll mid = (low+high)/2;
        if(check(a,b,mid))
            high=mid;
        else
            low=mid+1;
      }
      cout << low << '\n';
    }

    return 0;
}