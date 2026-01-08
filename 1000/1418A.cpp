// Author: MDhruv03
// Time: 16:32 on 08/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll ceil(ll a ,ll b)
{
    return (a + b - 1) / b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int tt;
  cin >> tt;
    while (tt--){
        ll x,y,k;
        cin >> x >> y >> k;
        ll gain = x-1;
        ll sticksNeeded = k * y + k - 1;
        ll trades = ceil(sticksNeeded , gain);
        trades+=k;
        cout << trades << endl;
}

    return 0;
}