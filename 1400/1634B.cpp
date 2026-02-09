// Author: MDhruv03
// Problem: 1634B
// Time: 18:45 on 09/02/2026

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
        ll n,x,y;
        cin >> n >> x >> y;
        vector<ll> a(n);
        ll numOdds=0;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]%2==1)
                numOdds++;
        }

        int aliceStart=x%2;
        int bobStart=1-aliceStart;
        int aliceEnd,bobEnd;
        if(numOdds%2==0)
        {
            aliceEnd=aliceStart;
            bobEnd=bobStart;
        }
        else
        {
            aliceEnd=1-aliceStart;
            bobEnd=1-bobStart;
        }
        if(y%2==aliceEnd)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }

    return 0;
}