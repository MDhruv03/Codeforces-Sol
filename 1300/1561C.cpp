// Author: MDhruv03
// Problem: 1561C
// Time: 09:48 on 31/01/2026

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
        int n;
        cin >> n;
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++)
        {
           int k;
           cin >> k;
           vector<int> temp;
              for(int j=0;j<k;j++)
              {
                int val;
                cin >> val;
                temp.push_back(val -j +1);
              }
              sort(temp.begin(),temp.end());
              a.push_back({temp[k-1],k});
        }

        sort(a.begin(),a.end());
        int answer=a[0].first;
        int increase=a[0].second;
        for(int i=1;i<n;i++)
        {
           answer=max(answer,a[i].first - increase);
            increase += a[i].second;
        }
        cout << answer << endl;
    }

    return 0;
}