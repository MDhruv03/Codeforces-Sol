// Author: MDhruv03
// Problem: 1742D
// Time: 09:25 on 16/01/2026

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

        vector<int> coprimes[1001];
        for(int i=1;i<=1000;i++)
        {
            for(int j=1;j<=1000;j++)
            {
                if(__gcd(i,j)==1)
                    coprimes[i].push_back(j);
            }
        }
        int n;
        cin >> n;
        vector<int> a(1001,0);
        for (int i = 1; i <= n; i++) 
        {
            int x;
            cin >> x;
            a[x]=i;
        }

        int answer=-1;
        for(int i=1;i<=1000;i++)
        {
            if(a[i]==0)
                continue;
            for(auto &j: coprimes[i])
            {
                if(a[j]==0)
                    continue;
                answer=max(answer,a[i]+a[j]);
            }    
        }
        cout << answer << '\n';
    }

    return 0;
}