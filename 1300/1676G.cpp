// Author: MDhruv03
// Problem: 1676G
// Time: 19:01 on 30/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
int ans=0;

int dfs(int node , vector<vector<int>> &adj,string &s)
{
    if(adj[node].size()==0)
        return s[node-1]=='W'?1:-1;
    
     int count=0;
    for(auto x : adj[node])
    {
        count+=dfs(x,adj,s);
    }
    count += s[node-1]=='W'?1:-1;
    if(count==0)
        ans++;
    return count;   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        ans=0;
        int n;
        cin >> n;
        vector<int> a(n);
        vector<vector<int>> adj(n+1,vector<int>());
        for(int i=0;i<n-1;i++)
        {
            int temp;
            cin >> temp;;
            adj[temp].push_back(i+2);
        }
        string s;
        cin >> s;

        dfs(1,adj,s);
        cout << ans << endl;
    }

    return 0;
}