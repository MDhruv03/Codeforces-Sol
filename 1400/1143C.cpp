// Author: MDhruv03
// Problem: 1143C
// Time: 16:14 on 20/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int n;
   cin >> n;
   vector<bool> good(n,false);
   vector<vector<int>> adj(n);
   for(int i=0;i<n;i++)
   {
    int parent, type;
    cin >> parent >> type;
    if(type==0)
        good[i]=true;
    if(parent!=-1)
        adj[parent-1].push_back(i);    
   }

   vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(good[i])
            continue;
        bool flag=true;    
        for(auto x: adj[i])
        {
            if(good[x])
                flag=false;
        }
        if(flag)
            ans.push_back(i+1);
        
    }
    if(ans.empty())
        cout << -1 << endl;
    else
    {
        for(int x: ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}