// Author: MDhruv03
// Problem: 1872E
// Time: 17:07 on 21/02/2026

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
        vector<int> arr(n);
        for(int &x: arr)
            cin >> x;
        string s;
        cin >> s;
        vector<ll> prefixXor(n+1,0);
        for(int i=0;i<n;i++)
            prefixXor[i+1] = prefixXor[i] ^ arr[i];
        ll zeroXor=0;
        ll oneXor=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                oneXor^=arr[i];
            else
                zeroXor^=arr[i];
        }
        int q;
        cin >> q;
        while(q--)
        {
            int type;
            cin >> type;
            if(type==1)
            {
                int l,r;
                cin >> l >> r;
                ll segmentXor = prefixXor[r] ^ prefixXor[l-1];
                oneXor ^= segmentXor;
                zeroXor ^= segmentXor;
            }
            else
            {
                int x;
                cin >> x;
                if(x==0)
                    cout << zeroXor << " ";
                else
                    cout << oneXor << " ";
            }

    }
    cout << endl;
    }
    return 0;
}