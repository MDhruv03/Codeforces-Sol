// Author: MDhruv03
// Problem: 862B
// Time: 21:33 on 02/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int red =0,white=0;
void dfs(int node,vector<vector<ll>> &adj,vector<bool> &visited,int color)
{
    visited[node]=true;
    if(color==0)
        red++;
    else
        white++;
    for(ll neighbor : adj[node])
    {
        if(!visited[neighbor])
        {
            dfs(neighbor,adj,visited,1-color);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   ll n;
   cin >> n;
   vector<vector<ll>> adj(n,vector<ll>());
    for(ll i=0;i<n-1;i++)
    {
        int u,v;
        cin >> u >> v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(n,false);
    ll answer=0;
    dfs(0,adj,visited,0);
    answer= 1LL*red*white - (n-1);
    cout << answer << endl;
    return 0;
}