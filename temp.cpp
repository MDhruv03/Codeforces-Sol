// Author: MDhruv03
// Problem: temp
// Time: 20:35 on 11/02/2026

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
        ll p,q;
        cin >> p >> q;
        ll d = q-p;
        bool bob = false;
        for(auto it : {d,d-1})
            {
                if(it>=1)
                {
                    if(2*it<=p && 3*it<=q)
                    {
                        bob = true;
                        break;
                    }
                }
            }

            cout << (bob ? "Bob" : "Alice") << endl;
    }

    return 0;
}