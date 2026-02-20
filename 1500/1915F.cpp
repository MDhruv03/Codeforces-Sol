// Author: MDhruv03
// Problem: 1915F
// Time: 18:12 on 20/02/2026

#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define endl '\n'
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<pair<int,int>> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        sort(a.begin(),a.end());
        ll answer=0;
        Oset s;
        for(int i=0;i<n;i++)
        {
            answer+=i-s.order_of_key(a[i].second);
            s.insert(a[i].second);
        }
        cout << answer << endl;
    }

    return 0;
}