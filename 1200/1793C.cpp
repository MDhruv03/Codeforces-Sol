// Author: MDhruv03
// Problem: 1793C
// Time: 18:59 on 20/01/2026

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

        int maxi=n,mini=1;
        int l=0,r=n-1;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(a[l]!=mini && a[l]!=maxi && a[r]!=mini && a[r]!=maxi)
            {
                flag=true;
                break;
            }
            else if(a[l]==maxi)
            {
                l++;
                maxi--;
            }
            else if(a[l]==mini)
            {
                l++;
                mini++;
            }
            else if(a[r]==maxi)
            {
                r--;
                maxi--;
            }
            else
            {
                r--;
                mini++;
            }
        }
        if(flag)
            cout << l+1 << " " << r+1 << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}