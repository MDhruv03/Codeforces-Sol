// Author: MDhruv03
// Problem: 1167B
// Time: 16:33 on 19/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int query(int a,int b)
{
    cout << "? " << a+1 << " " << b+1 << endl;
    int ans;
    cin >> ans;
    return ans;
}

int common (pair<int,int> a,pair<int,int> b)
{
    if(a.first==b.first || a.first==b.second)
        return a.first;
    return a.second;
}

int other(pair<int,int> a,int common)
{
    if(a.first==common)
        return a.second;
    return a.first;
}

int main() {
    vector<int> arr = {4,8,15,16,23,42};
    map<int,pair<int,int>> mp;
    for(int i=0;i<6;i++)
        for(int j=i+1;j<6;j++)
            mp[arr[i]*arr[j]]={arr[i],arr[j]};

    vector<int> ans(6);
    auto p1=mp[query(0,1)];
    auto p2=mp[query(1,2)];
    ans[1]=common(p1,p2);
    ans[0]=other(p1,ans[1]);
    ans[2]=other(p2,ans[1]);
    
    auto p3=mp[query(3,4)];
    auto p4=mp[query(4,5)];
    ans[4]=common(p3,p4);
    ans[3]=other(p3,ans[4]);
    ans[5]=other(p4,ans[4]);
    cout << "! ";
    for(int i=0;i<6;i++)
        cout << ans[i] << " ";
    cout << endl;    
    return 0;
}