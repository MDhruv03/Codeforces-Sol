// Author: MDhruv03
// Problem: 1167C
// Time: 16:27 on 16/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

vector<int> parent,sz;
int find(int a)
{
    if (a==parent[a])
        return a;
    return parent[a]=find(parent[a]);
}

void join(int a,int b)
{
    a=find(a);
    b=find(b);
    if (a!=b)
    {
        if (sz[a]<sz[b])
            swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    parent.resize(n);
    for(int i=0;i<n;i++)
        parent[i]=i;
    sz.resize(n,1);

    for(int i=0;i<m;i++)
    {
        int k;
        cin >> k;
        if(k>0)
        {
            int first;
            cin >> first;
            first--;
            for(int j=1;j<k;j++)
            {
                int next;
                cin >> next;
                next--;
                join(first,next);
            }
        }
    }
    for(int i=0;i<n;i++)
        cout << sz[find(i)] << " ";

    return 0;
}