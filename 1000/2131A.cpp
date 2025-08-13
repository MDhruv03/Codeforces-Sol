// Author: MDhruv03
// Time: 20:08 on 10/08/2025

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
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int count=0;
        for (int i = 0; i < n; i++) {
            if(a[i]>b[i])
                count+=a[i]-b[i];
        }

        cout << count+1 << endl;
}

    return 0;
}