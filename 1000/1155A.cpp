// Author: MDhruv03
// Time: 19:04 on 08/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag=false;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]>s[i+1])
            {
                cout << "YES" << endl;
                cout << i+1 << " " << i+2 << endl;
                flag=true;
                break;
            }
            if(!flag && i==n-2)
            {
                cout << "NO" << endl;
            }
        }

    return 0;
}