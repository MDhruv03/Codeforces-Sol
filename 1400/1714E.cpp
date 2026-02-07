// Author: MDhruv03
// Problem: 1714E
// Time: 10:08 on 07/02/2026

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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll &x : a) cin >> x;

        for(ll &it : a)
            if(it%2==1)
                it+=it%10;

        if(count(a.begin(), a.end(), a[0])==n){
            cout<<"YES"<<endl;
            continue;
        }

        bool flag=true;
        for(ll &it : a){
            if(it%10==0)
            {
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
        }
        if(!flag) continue;
        for(ll &it : a){
            while(it%10!=2)
                it += it%10;
            it%=20;    
        }

        if(count(a.begin(), a.end(), a[0])==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}