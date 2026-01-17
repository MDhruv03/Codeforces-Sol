// Author: MDhruv03
// Problem: 1914D
// Time: 11:42 on 17/01/2026

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
        int n;
        cin >> n;
        vector<pair<ll,ll>> a(n);
        vector<pair<ll,ll>> b(n);
        vector<pair<ll,ll>> c(n);

        for(int i=0;i<n;i++) 
            {cin >> a[i].first;
                a[i].second=i;}
        for(int i=0;i<n;i++) 
            {cin >> b[i].first;
                b[i].second=i;}
        for(int i=0;i<n;i++) 
            {cin >> c[i].first;
                c[i].second=i;}

        sort(a.begin(),a.end(),greater<pair<ll,ll>>());
        sort(b.begin(),b.end(),greater<pair<ll,ll>>());
        sort(c.begin(),c.end(),greater<pair<ll,ll>>());

        ll maxi=LLONG_MIN;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(a[i].second!=b[j].second && b[j].second!=c[k].second && c[k].second!=a[i].second)
                        maxi=max(maxi,a[i].first+b[j].first+c[k].first);
                }
            }
        }

        cout << maxi << '\n';
    }

    return 0;
}