// Author: MDhruv03
// Problem: 1682B
// Time: 13:55 on 16/01/2026

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
        int n;
        cin >> n;
        int answer= (1<<30) -1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            if(x!=i) answer &= x;
        }
        cout << answer << '\n';

    }

    return 0;
}