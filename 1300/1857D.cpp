// Author: MDhruv03
// Problem: 1857D
// Time: 10:32 on 28/01/2026

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
        vector<ll> a(n),b(n),c(n);
        for(ll &x : a) cin >>x;
        for(ll &x : b) cin >>x;
        for(ll i=0;i<n;i++)
            c[i]=a[i]-b[i];

        ll maxi = *max_element(c.begin(),c.end());
        ll answer=0;
        vector<ll> indices;
        for(ll i=0;i<n;i++)
        {
            if(c[i]==maxi)
            {
                indices.push_back(i+1);
                answer++;
            }
        } 
        
        cout << answer << endl;
        for(ll idx : indices)
            cout << idx << " ";
        cout << endl;    
    }

    return 0;
}