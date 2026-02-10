// Author: MDhruv03
// Problem: 1520E
// Time: 12:47 on 10/02/2026

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
        string s;
        cin >> s;
        vector<int> sheep;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
                sheep.push_back(i);
        }

        int index = (sheep.size()-1)/2;
        ll ans=0;
        for(int i=0;i<sheep.size();i++)
        {
            ans+=abs(sheep[i]-(sheep[index]-(index-i)));
        }
        cout << ans << endl;
    }

    return 0;
}