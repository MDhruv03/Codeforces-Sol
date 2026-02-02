// Author: MDhruv03
// Problem: 1077C
// Time: 18:50 on 02/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;

    vector<ll> count(1e6 + 1, 0);
    for (ll x : a) {
        count[x]++;
    }
    ll sum = accumulate(a.begin(), a.end(), 0LL);
    vector<ll> answer;
    for(ll i =0;i<n;i++)
    {
        ll temp = sum - a[i];
        count[a[i]]--;
        if(temp%2==0 && temp/2<=1e6 && count[temp/2]>0)
            answer.push_back(i+1);
        count[a[i]]++;
    }

    cout << answer.size() << endl;
    for(ll idx : answer)
        cout << idx << " ";

    return 0;
}