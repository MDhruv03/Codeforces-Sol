// Author: MDhruv03
// Time: 17:53 on 04/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
        int n,d;
        cin>>n>>d;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int result=0;
        int r=n-1;
        int l=0;
        int teams=1;
        while(l<=r){    
        long long M = a[r];
        long long k = d / M + 1;

        if (r - l + 1 >= k) {
            result++;
            r--;                
            l += (k - 1);        
        } else {
            break;
        }
    }
        cout << result << endl;

    return 0;
}