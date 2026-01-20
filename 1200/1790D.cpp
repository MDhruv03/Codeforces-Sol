// Author: MDhruv03
// Problem: 1790D
// Time: 22:07 on 20/01/2026

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
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
            
        map<int,int> freq;
        for(int i=0;i<n;i++)
            freq[a[i]]++;
            
        ll ans=0;    
        for(auto &it :freq)
        {   
            int element = it.first;
            ans+= max(0,freq[element] - freq[element-1]);
        }  
        
        cout << ans << '\n';
    }

    return 0;
}