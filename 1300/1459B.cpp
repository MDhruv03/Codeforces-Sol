// Author: MDhruv03
// Problem: 1459B
// Time: 12:40 on 31/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int n;
        cin >> n;
        int k = n/2;
        if(n%2==0)
            cout << (k+1)*(k +1) << endl;
        else
            cout << 2 * (k+1)*(k +2) << endl;    

    return 0;
}