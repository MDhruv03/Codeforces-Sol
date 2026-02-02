// Author: MDhruv03
// Problem: 808B
// Time: 19:11 on 02/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;

    ll sum = accumulate(a.begin(), a.begin() + k, 0LL);
    ll totalSum=sum;
    ll start=0,end=k;
    while(end<n)
    {
       sum-=a[start];
       sum+=a[end];
        totalSum+=sum;
        start++;
        end++;
    }
    cout << fixed << setprecision(10) << (double)totalSum/(n - k + 1) << endl;

    return 0;
}