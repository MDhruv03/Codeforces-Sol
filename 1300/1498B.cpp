// Author: MDhruv03
// Problem: 1498B
// Time: 10:01 on 31/01/2026

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
        ll n ,w;
        cin >> n >> w; 
        vector<int> widths(n);
        for(int i=0;i<n;i++)
            cin >> widths[i];

        sort(widths.rbegin(),widths.rend());
        multiset<int> remaining;
        ll height = 0;
       for(auto width : widths)
       {
        auto it = remaining.lower_bound(width);
        if(it == remaining.end())
        {
            height++;
            remaining.insert(w - width);
        }
        else
        {
            ll newWidth = *it;
            remaining.erase(it);
            remaining.insert(newWidth - width);
        }
       }
        cout << height << endl;
    }

    return 0;
}