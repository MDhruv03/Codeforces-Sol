// Author: MDhruv03
// Problem: 1904C
// Time: 20:57 on 03/02/2026

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
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(k>=3)
        {
            cout << 0 << '\n';
            continue;
        }
        else {
            vector<ll> diffs;
            for(ll i=0;i<n;i++)
            {
                for(ll j=i+1;j<n;j++)
                {
                    diffs.push_back(abs(a[i]-a[j]));
                }
            }
            sort(diffs.begin(),diffs.end());
            ll answer=LLONG_MAX;
            for(ll i=0;i<n;i++)
                answer=min(answer,a[i]);
            answer = min(answer, diffs[0]);
            if(k==2)
            {
                for(ll i=0;i<n;i++)
                {
                    auto it = lower_bound(diffs.begin(),diffs.end(),a[i]);
                    if(it!=diffs.end())
                        answer=min(answer,abs(a[i]-(*it)));
                    if(it!=diffs.begin())
                    {
                        it--;
                        answer=min(answer,abs(a[i]-(*it)));
                    }    
                }
            }
            cout << answer << '\n';
        }
    }

    return 0;
}