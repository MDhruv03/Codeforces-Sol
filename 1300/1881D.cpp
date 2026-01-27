// Author: MDhruv03
// Problem: 1881D
// Time: 10:59 on 27/01/2026

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        map<int, int> mp;
        for(int i=0;i<n;i++)
        {
            for(int j=2;j*j<=v[i];j++)
            {
                while(v[i]%j==0)
                {
                    mp[j]++;
                    v[i]/=j;
                }
            }
            if (v[i] > 1) {
                mp[v[i]]++;
            }
        }
        bool flag = true;
        for (auto& [key, value] : mp) {
            if (value % n != 0) {
                flag = false;
                break;
            }
        }    
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}