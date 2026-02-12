// Author: MDhruv03
// Problem: 1475C
// Time: 18:03 on 12/02/2026

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
        int a,b,k;
        cin >> a >> b >> k;
        vector<int> boys(a);
        vector<int> girls(b);
        for(int i=0;i<k;i++) { 
            int x; 
            cin >> x; 
            boys[x-1]++; }
        for(int i=0;i<k;i++) { 
            int x; 
            cin >>x;
            girls[x-1]++;}
        ll answer = 1LL*k*(k-1)/2;

        for(int i=0;i<a;i++) 
        answer -= 1LL*boys[i]*(boys[i]-1)/2;
        for(int i=0;i<b;i++) 
        answer -= 1LL* girls[i]*(girls[i]-1)/2; 
        
        cout << answer << endl;
    
}
    return 0;
}