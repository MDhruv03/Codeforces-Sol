// Author: MDhruv03
// Problem: 1610C
// Time: 21:57 on 16/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool check(vector<ll> &a ,ll num)
{
    vector<ll> temp;
    for(int i=0;i<a.size();i++)
        if(a[i]!=num)
            temp.push_back(a[i]);
         
    int size=temp.size();        
    for(int i=0;i<size;i++)
    {
        if(temp[i]!=temp[size-1-i])
            return false;
    }
    return true;        

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        bool flag=true;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=a[n-1-i])
            {
                if(check(a,a[i]) || check(a,a[n-1-i]))
                    flag = true;
                else 
                    flag = false;
                break;        
            }
        }

        cout << ( flag? "YES" : "NO" ) << '\n';
    }

    return 0;
}