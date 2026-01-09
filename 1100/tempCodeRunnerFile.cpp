// Author: MDhruv03
// Time: 21:45 on 09/01/2026

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
        int n;
        cin >> n;
        vector<pair<ll,ll>> a(n);
        for (int i = 0; i < n; i++)
            {
                cin >> a[i].first;
                a[i].second = i;
            }

        sort(a.begin(), a.end());
        vector<ll> prefix(n,0);
        prefix[0]=a[0].first;
        for(ll i=1;i<n;i++){
            prefix[i]=prefix[i-1]+a[i].first;
        }

        vector<ll> result(n);
        for(ll i=0;i<n;i++){
            int taken=i;
            int j=i;

            while(j<n)
            {
                pair<ll,ll> temp = {prefix[j]+1,INT_MIN};
                ll idx = lower_bound(a.begin(),a.end(),temp) - a.begin();
                idx--;

                if(idx==j)
                    break;
                
                taken+=idx-j;
                j=idx;    
            }
            result[a[i].second]=taken;
        }

        for(int i=0;i<n;i++)
            cout << result[i] << " ";
        
        cout << endl;    
}

    return 0;
}