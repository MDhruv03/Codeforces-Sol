// Author: MDhruv03
// Problem: 1656B
// Time: 18:51 on 16/01/2026

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
        int n,k;
        cin >> n >> k;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
        map<int,bool> seen;
        for (auto &it : a)
		    seen[it] = true;

        bool flag = false;
        for(int i=0;i<n;i++)
            if(seen.find(a[i]- k) != seen.end()) {
                flag = true;
                break;
            }
        
        cout << (flag ? "YES" : "NO") << '\n';    
    }

    return 0;
}