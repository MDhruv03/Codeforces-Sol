// Author: MDhruv03
// Time: 18:23 on 26/10/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int tt;
  cin >> tt;
    while (tt--){
        ll a,b;
        cin >> a >> b;
        if ((a + b) % 3 == 0 && max(a,b) <= 2*min(a,b)) 
            cout << "YES\n";
        else 
            cout << "NO\n";   
}

    return 0;
}