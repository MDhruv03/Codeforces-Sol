// Author: MDhruv03
// Time: 18:14 on 04/08/2025

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
        vector<int> arr(n);
        for(int i=0;i<n;i++ )
            cin >> arr[i];
        if(k>1)
            cout << "YES" << endl;
        else
        {vector<int> arr2(n);
            arr2 = arr;
            if(sort(arr.begin(), arr.end()), arr == arr2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }       
}

    return 0;
}