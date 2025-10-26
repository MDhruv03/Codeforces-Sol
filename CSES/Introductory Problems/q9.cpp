// Author: MDhruv03
// Time: 18:10 on 26/10/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int n;
cin >> n;
ll ans = 1;
for(int i = 0; i < n; i++) {
    ans = (ans * 2) % 1000000007;
}
cout << ans << endl;

    return 0;
}