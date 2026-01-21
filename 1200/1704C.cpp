// Author: MDhruv03
// Problem: 1704C
// Time: 17:19 on 21/01/2026

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
        ll n,m;
        cin >> n >> m;
        vector<ll> infected(m);
        for(int i=0;i<m;i++)
            cin >> infected[i];

        sort(infected.begin(), infected.end());    
        
        vector<ll> gaps;
        for(int i=1;i<m;i++)
        {
            ll gap = infected[i]-infected[i-1]-1;
            if(gap>0)
                gaps.push_back(gap);
        }

        ll end_gap = n - infected[m-1] + infected[0] - 1;
        if(end_gap>0)
            gaps.push_back(end_gap);

        sort(gaps.rbegin(), gaps.rend());
        ll days_passed=0;
        ll saved=0;
        for(auto gap:gaps)
        {
            ll effective_gap = gap - 2*days_passed;
            if(effective_gap>0)
                saved++;
            effective_gap -=2;
            if(effective_gap>0)
                saved += effective_gap;
            days_passed +=2;    
        }    
        cout << n - saved << '\n';
    }

    return 0;
}