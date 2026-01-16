// Author: MDhruv03
// Problem: 1631B
// Time: 18:59 on 16/01/2026

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
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];

        int i= n-1;
        while(i>=0 && a[i]==a[n-1])
            i--;
        
        if(i==-1)
        {
            cout << 0 << '\n';
            continue;
        }

        int answer=0;
        while(i>=0)
        {   
            i-=n-i-1;
            answer++;
            while(i>=0 && a[i]==a[n-1])
                i--;
        }
        cout << answer << '\n';
    }

    return 0;
}