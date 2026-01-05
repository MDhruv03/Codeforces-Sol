// Author: MDhruv03
// Time: 22:23 on 05/01/2026

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
        n--;
        int msb= log2(n);
        vector<int> res;
        for(int i=pow(2,msb)-1;i>=0;i--)
            res.push_back(i);
        for(int i=pow(2,msb);i<=n;i++)
            res.push_back(i);
            
         for(auto &x:res)
            cout << x << " ";   
         cout << endl;   
}

    return 0;
}