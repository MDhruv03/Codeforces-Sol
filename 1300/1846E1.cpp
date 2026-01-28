// Author: MDhruv03
// Problem: 1846E1
// Time: 10:42 on 28/01/2026

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
        ll start=1;
        bool flag = false;
        for(ll i=2; i*i<=n && !flag;i++)
        {
            ll start=1;
            ll sum=1;

            while(sum<n)
            {
                start*=i;
                sum+=start;
            }
            if(sum==n)
            {
                flag=true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}