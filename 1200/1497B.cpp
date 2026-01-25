// Author: MDhruv03
// Problem: 1497B
// Time: 15:26 on 25/01/2026

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
        ll n,m;
        cin >> n >> m;
        vector<ll> a(n);
        vector<ll> remainder(m,0);
        for(ll &i : a) {
            cin >> i;
            remainder[i % m]++;
        }

        ll answer=0;
        for(int i=0;i<m;i++)
        {
            ll x = remainder[i];
            ll y = remainder[(m - i) % m];
            if(x+y == 0) continue;

            ll count = min(x,y);
            x-=min(count+1,x);
            y-=min(count+1,y);
            answer++;

            answer+=(x+y);
            remainder[i]=0;
            remainder[(m - i) % m]=0;
        }

        cout << answer << '\n';
    }

    return 0;
}