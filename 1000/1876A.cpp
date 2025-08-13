// Author: MDhruv03
// Time: 18:35 on 13/08/2025

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
        int n,p;
        cin >> n >> p;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++) {    
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {    
            cin >> b[i];
        }

        vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++) {
            v[i] = {b[i], a[i]};
        }

        sort(v.begin(), v.end());
        ll mincost=p;
        ll sharedto=1;
        for(auto it : v){
            int canshare=it.second;
            int cost=it.first;
            if(cost>=p)
                break;
            if(canshare+sharedto>n)
                {
                    mincost+=(n-sharedto)*cost;
                    sharedto=n;
                    break;
                }
            else
            {
                mincost+=canshare*cost;
                sharedto+=canshare;
            }    
        }

        mincost+=(n-sharedto)*p;
        cout << mincost << endl;

}

    return 0;
}