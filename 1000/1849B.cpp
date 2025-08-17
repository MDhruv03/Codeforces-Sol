// Author: MDhruv03
// Time: 14:36 on 15/08/2025

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
        int n,k;
        cin >> n >>k;
        vector<pair<ll,ll>> arr(n);
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            arr[i].first = num%k;
            if(arr[i].first ==0 ) 
                arr[i].first = k;
    
            arr[i].second = i;
        }

        sort(arr.begin(), arr.end(),[&](pair<ll,ll> a, pair<ll,ll> b) {
            if(a.first != b.first) {
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        for(int i = 0; i < n; i++) {
                cout << arr[i].second + 1 << " ";
            }
            cout << endl;
        }
        
        return 0;
}