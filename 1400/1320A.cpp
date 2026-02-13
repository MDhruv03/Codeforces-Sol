// Author: MDhruv03
// Problem: 1320A
// Time: 10:51 on 13/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int n;
        cin >> n;
        vector<int> b(n);
        map<int,ll> freq;
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
            freq[i - b[i]]+=b[i];
        }
        ll max_freq = 0;
        for(auto it : freq)
            max_freq = max(max_freq,it.second);
        cout << max_freq << endl;

    return 0;
}