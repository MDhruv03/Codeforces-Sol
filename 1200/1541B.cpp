// Author: MDhruv03
// Problem: 1541B
// Time: 11:05 on 23/01/2026

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
        for(int i=0;i<n;i++) cin >> arr[i];

        int answer=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                {
                    if(arr[i] * arr[j] == i+j+2)
                        answer++;
                }
        }

        cout << answer << '\n';
    }

    return 0;
}