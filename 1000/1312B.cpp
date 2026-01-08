// Author: MDhruv03
// Time: 18:57 on 08/01/2026

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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(),greater<int>());

        for(int i=0;i<n;i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
}

    return 0;
}