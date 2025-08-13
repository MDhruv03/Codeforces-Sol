// Author: MDhruv03
// Time: 18:41 on 04/08/2025

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
        int n,x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i=0;i<n;i++ )
            cin >> arr[i];
        int gas=0;
        int curr=0;
        for(int i=0;i<n;i++)
            {
                gas=max(gas,arr[i]-curr);
                curr=arr[i];
            }
         gas=max(gas,2*(x-curr));   

         cout << gas << endl;
}

    return 0;
}