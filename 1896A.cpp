// Author: MDhruv03
// Time: 23:27 on 05/08/2025

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
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin >> arr[i];

        if(arr[0]==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;      
}

    return 0;
}