// Author: MDhruv03
// Problem: 1294C
// Time: 18:17 on 31/01/2026

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
         vector<ll> factors;
        for(ll i=2;i*i<=n;i++)
        {
            if(n%i != 0) continue;
            factors.push_back(i);
            n /= i;
            if(factors.size() == 2) break;
        }

        if(factors.size() < 2 || n == factors[0] || n == factors[1] || n == 1)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << factors[0] << " " << factors[1] << " " << n << endl;
        }    
    }

    return 0;
}