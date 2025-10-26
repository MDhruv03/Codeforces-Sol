// Author: MDhruv03
// Time: 10:23 on 26/10/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int n;
cin >> n;
vector<ll> a(n);
for(int i=0; i<n; i++)
    cin >> a[i];
ll moves=0;
for(int i=0; i<n-1; i++){   
    if(a[i+1]<a[i])
    {
        moves += a[i] - a[i+1];
        a[i+1] = a[i];
    }
} 
cout << moves << endl;
    return 0;
}