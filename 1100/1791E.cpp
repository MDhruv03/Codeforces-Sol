// Author: MDhruv03
// Problem: 1791E
// Time: 22:10 on 15/01/2026

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
        vector<ll> a(n);
        int negatives=0;
        bool zero_found=false;
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
            if(a[i]<0)
                negatives++;
            if(a[i]==0)
                zero_found=true;    
        }
        ll sum=0;
        ll mini = LLONG_MAX;
        for(int i=0;i<n;i++)
        {
            sum+=abs(a[i]);
            mini=min(mini,abs(a[i]));
        }
        if(negatives%2==0 || zero_found){
            cout << sum << '\n';
            continue;
        }
        cout << sum - 2*mini << '\n';
    }

    return 0;
}