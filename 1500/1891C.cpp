// Author: MDhruv03
// Problem: 1891C
// Time: 22:07 on 20/02/2026

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
        for(int i=0;i<n;i++)
            cin >> arr[i];
        ll total = accumulate(arr.begin(),arr.end(),0LL);
        ll remaining = total/2;
        ll answer=total - remaining;
        sort(arr.rbegin(),arr.rend());
        for(int &x: arr)
        {
            if(remaining<=0)
                break;
            remaining-=x;
            answer++;    
        }
        cout << answer << endl;
    }

    return 0;
}