// Author: MDhruv03
// Time: 17:53 on 26/10/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

ll n;
cin >> n;
ll sum=n*(n+1)/2;
if(sum%2!=0)
    cout << "NO" << endl;
else{
    cout << "YES" << endl;
    vector<ll> a,b;
    ll target=sum/2;
    for(int i=n;i>=1;i--){
        if(target-i>=0){
            a.push_back(i);
            target-=i;
        }
        else
            b.push_back(i);
    }
    cout << a.size() << endl;
    for(auto x:a)
        cout << x << " ";
    cout << endl;
    cout << b.size() << endl;
    for(auto x:b)
        cout << x << " ";
    cout << endl;
}    

    return 0;
}