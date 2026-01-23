// Author: MDhruv03
// Problem: 1594C
// Time: 10:54 on 23/01/2026

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
        char c;
        string s;
        cin >> n >> c >> s;

        bool check = true;
        for(char ch : s)
            if(ch!=c)
                check=false;
        
        if(check)
        {
            cout << 0 << '\n';
            continue;
        }
        
        bool possible = false;
        for(int i=2;i<=n;i++)
        {
            bool ok = true;
            for(int j=i;j<=n;j+=i)
            {
                if(s[j-1]!=c)
                {
                    ok=false;
                    break;
                }
            }
            if(ok)
            {
                possible=true;
                cout << 1 << '\n' << i << '\n';
                break;
            }
        }
        if(!possible)
        {
            cout << 2 << '\n' << n-1 << " " << n << '\n';
        }
    }

    return 0;
}