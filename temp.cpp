// Author: MDhruv03
// Problem: temp
// Time: 20:41 on 23/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int twoPower(int n)
{
    return 1<< (31-__builtin_clz(n));
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        
        vector<int> p(n+1);
        for(int i = 1; i <= n; i += 2){
            if(i+1 <= n){
                p[i] = i+1;
                p[i+1] = i;
            }
        }

        for(int i = 1; i <= n; ++i){
            cout << p[i] << " ";
        }
        cout << '\n';  
    }

    return 0;
}