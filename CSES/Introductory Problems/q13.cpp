// Author: MDhruv03
// Time: 18:49 on 26/10/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


string toBinary(int num, int n) {
    string s;
    for (int i = n-1; i >= 0; --i)
        s += ((num >> i) & 1) + '0';
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int total = 1 << n; // 2^n

    for (int i = 0; i < total; ++i) {
        int gray = i ^ (i >> 1);
        cout << toBinary(gray, n) << '\n';
    }
}
