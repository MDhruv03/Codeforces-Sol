// Author: MDhruv03
// Problem: 1487B
// Time: 16:16 on 25/01/2026

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
        ll n,k;
        cin >> n >> k;
        k--;
        if(n%2==0)
            cout << (k%n) +1 << '\n';
        else
        {
            int val = n/2;
            cout << (k + (k/val))%n +1 << '\n';
        }
    }   

    return 0;
}