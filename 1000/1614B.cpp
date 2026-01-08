// Author: MDhruv03
// Time: 22:31 on 08/01/2026

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
        ll n;
        cin >> n;
        vector<pair<ll, ll>> points(n);
        for (ll i = 0; i < n; i++) {
            cin >> points[i].first ;
            points[i].second = i;
        }
        sort(points.rbegin(), points.rend());

        vector<ll> result(n+1);
        result[0] = 0;

        ll minutes=0;
        ll coordinate=1;
        for(ll i = 0; i < n; i++) {
            result[points[i].second + 1] = coordinate;
            minutes += 2 * abs(coordinate) * points[i].first;

            if(coordinate>0)
                coordinate=-coordinate;
            else
                coordinate=abs(coordinate)+1;
        }

        cout << minutes << endl; 
        for (ll i = 0; i <= n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
        
}

    return 0;
}