// Author: MDhruv03
// Problem: 1820B
// Time: 13:42 on 14/01/2026

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
        int n = (int)s.size();
        int maxi=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                count++;
                maxi=max(maxi,count);
            }
            else
                count=0;
        }
        if(maxi==n)
        {
             cout << n*n << '\n';
             continue;
        }

        if(s[0]=='1' && s[n-1]=='1')
        {
            int i=0;
            count=0;
            while(i<n && s[i]=='1')
            {
                count++;
                i++;
            }
            int j =n-1;
            while(j>i && s[j]=='1')
            {
                count++;
                j--;
            }
        }
        maxi=max(maxi,count);
        maxi++;
        ll S = (maxi+1)/2;
        cout << S * (maxi/2) << '\n';

    }

    return 0;
}