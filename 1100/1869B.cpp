// Author: MDhruv03
// Time: 14:45 on 11/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int tt;
cin >> tt;
    while (tt--){
        ll n,k,a,b;
        cin >> n >> k >> a >> b;
        vector<pair<ll,ll>> cities(n);
        for (ll i = 0; i < n; i++) {
            cin >> cities[i].first >> cities[i].second;
        }
        
            ll costA=LLONG_MAX;
            ll costB=LLONG_MAX;
            for(int i=0;i<k;i++){
                costA = min(costA, abs(cities[i].first-cities[a-1].first) + abs(cities[i].second-cities[a-1].second));
                costB = min(costB, abs(cities[i].first-cities[b-1].first) + abs(cities[i].second-cities[b-1].second));    
        }

        ll direct = abs(cities[a-1].first-cities[b-1].first) + abs(cities[a-1].second-cities[b-1].second);
        if(k==0)
            cout << direct << endl;
        else
        cout << min(direct, costA + costB) << endl;


    }
    return 0;
}