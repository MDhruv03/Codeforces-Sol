// Author: MDhruv03
// Problem: 1673B
// Time: 18:35 on 16/01/2026

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
        string s;
        cin >> s;
        int n = int(s.size());
        int k=0;
        set<char> unique_chars;
        for(k=0;k<n;k++)
        {
            if(unique_chars.find(s[k])==unique_chars.end())
                unique_chars.insert(s[k]);
            else 
                break;    
        }

        bool flag=true;
        for(int i= k ;i<n;i++)
        {
            if(s[i]!=s[i-k])
            {
                flag=false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << '\n'; 
    }

    return 0;
}