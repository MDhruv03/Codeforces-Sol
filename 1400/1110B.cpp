// Author: MDhruv03
// Problem: 1110B
// Time: 14:17 on 15/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        ll n,m,k;
        cin >> n >> m >> k;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
        
        sort(a.begin(),a.end());
        vector<ll> differences(n-1);
        for(int i=0;i<n-1;i++)
            differences[i] = a[i+1]-a[i]-1;
        sort(differences.begin(),differences.end());
        ll answer=n;
        for(int i=0;i<n-k;i++)
            answer+=differences[i];

        cout << answer << endl;    

    return 0;
}