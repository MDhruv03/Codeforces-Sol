// Author: MDhruv03
// Problem: 1618C
// Time: 21:28 on 16/01/2026

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
        vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
           
        ll gcd1=0,gcd2=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                gcd1=__gcd(gcd1,a[i]);
            else 
                gcd2=__gcd(gcd2,a[i]);
        }
        
        bool flag=true;
        for(int i=1;i<n;i+=2)
        {
            if(a[i]%gcd1==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout << gcd1 << endl;
            continue;
        }
        flag=true;
        for(int i=0;i<n;i+=2)
        {
            if(a[i]%gcd2==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout << gcd2 << endl;
            continue;
        }
        cout << 0 << endl;
    }

    return 0;
}