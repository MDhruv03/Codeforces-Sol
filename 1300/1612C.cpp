// Author: MDhruv03
// Problem: 1612C
// Time: 21:03 on 30/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll total (ll days, ll k)
{
    if(days<=k)
        return (days*(days+1))/2;
    else
    {
        ll firstPart = (k*(k+1))/2;
        ll remaining = days - k;
        ll secondPart = (k-1+k-remaining)*remaining/2;
        return firstPart + secondPart;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll k,x;
        cin >> k >> x;

        ll left = 1, right = 2*k -1;
        ll ans = 2*k -1;
        while(left<=right)
        {
            ll mid = left + (right - left)/2;
            if(total(mid,k)>=x)
            {
                ans = mid;
                right = mid -1;
            }
            else
                left = mid +1;
        }
        cout << ans << endl;
    }

    return 0;
}