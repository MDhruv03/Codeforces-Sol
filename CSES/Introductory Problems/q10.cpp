// Author: MDhruv03
// Time: 18:14 on 26/10/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

ll n;
cin >> n;
 ll cnt = 0;
for (ll p = 5; p <= n; p *= 5)
        cnt += n / p;
cout << cnt << endl;        
    return 0;
}