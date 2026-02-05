// Author: MDhruv03
// Problem: 1830A
// Time: 12:02 on 05/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void dfs(int node, int parent, vector<vector<int>> &adj, map<pair<int,int>,int> &edgeIndex, vector<int> &dp)
{
    for(int neighbor: adj[node])
    {
        if(neighbor==parent)
            continue;
        
            if(edgeIndex[{node,neighbor}]<edgeIndex[{parent,node}])
                dp[neighbor]=dp[node]+1;
            else
                dp[neighbor]=dp[node];
                dfs(neighbor,node,adj,edgeIndex,dp);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<vector<int>> adj(n,vector<int>());
        map<pair<int,int>,int> edgeIndex;
        vector<int> dp(n,0);
        for(int i=0;i<n-1;i++)
        {
            int u,v;
            cin >> u >> v;
            u--;v--;
            edgeIndex[{u,v}]=i;
            edgeIndex[{v,u}]=i;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        edgeIndex[{-1,0}]=-1;
        dp[0]=1;
        dfs(0,-1,adj,edgeIndex,dp);
        cout << *max_element(dp.begin(),dp.end()) << endl;
    }

    return 0;
}