// Author: MDhruv03
// Time: 17:51 on 08/01/2026

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
        unordered_set<int> s;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        if(s.size()<n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
}

    return 0;
}