// Author: MDhruv03
// Problem: temp
// Time: 18:11 on 08/04/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n,k;
        cin >> n >> k;
        vector<int> arr(n+2);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        int pivot;
        cin >> pivot;
        arr[0]=arr[n+1]=arr[pivot];
        int left=0,right=0;
        for(int i=0;i<pivot;i++){
            if(arr[i]!=arr[i+1])
                left++;
        }
        for(int i=pivot;i<n+1;i++){
            if(arr[i]!=arr[i+1])
                right++;
        }

        cout << max(left,right) << endl;

    }

    return 0;
}