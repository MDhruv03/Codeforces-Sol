// Author: MDhruv03
// Problem: 1848B
// Time: 22:41 on 19/01/2026

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
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];

        vector<int> colors[k+1];
        for(int i=0;i<=k;i++) colors[i].push_back(0);
        for(int i=0;i<n;i++) {
            colors[v[i]].push_back(i+1);
        }
        for(int i=1;i<=k;i++) {
            colors[i].push_back(n+1);
        }

        priority_queue<int> jumps[k+1];

        int ans = INT_MAX;
        for(int i=1;i<=k;i++)
    {
            for(int j=0;j<colors[i].size()-1;j++){
                jumps[i].push(colors[i][j+1]-colors[i][j]-1);
            }

            int maxValue=jumps[i].top();
            jumps[i].pop();

            if(maxValue%2==0){
                jumps[i].push(maxValue/2);
                jumps[i].push((maxValue/2)-1);
            }
            else{
                jumps[i].push(maxValue/2);
                jumps[i].push(maxValue/2);
            }
            ans=min(ans,jumps[i].top());
    }

        cout << ans << endl;

    }

    return 0;
}