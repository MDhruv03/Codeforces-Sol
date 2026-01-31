// Author: MDhruv03
// Problem: 1360D
// Time: 17:26 on 31/01/2026

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
        ll n,k;
        cin >> n >> k;
        if(k>=n)
        {
            cout << 1 << endl;
            continue;
        }
        else{
            ll answer = n;
            for(ll i=1;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    if(i<=k)
                        answer = min(answer,n/i);
                    if(n/i<=k)
                        answer = min(answer,i);    
                }
            }
            cout << answer << endl;
        }
    }

    return 0;
}