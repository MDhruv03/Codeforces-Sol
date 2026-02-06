// Author: MDhruv03
// Problem: 1759D
// Time: 12:37 on 06/02/2026

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
        ll n,m;
        cin >> n >> m;
        ll factor2=0,factor5=0;
        ll k=1;
        ll temp = n;
        while(temp%2 == 0) factor2++, temp/=2;
        while(temp%5 == 0) factor5++, temp/=5;
        while(factor2<factor5 && k*2<=m) factor2++, k*=2;
        while(factor5<factor2 && k*5<=m) factor5++, k*=5;

        while(k*10<=m) k*=10;

        k*= m/k;
        cout << n*k << endl;
    }

    return 0;
}