// Author: MDhruv03
// Time: 12:08 on 26/10/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int tt;
  cin >> tt;
    while (tt--){
        ll x,y;
        cin >> x >> y;
        if(x<=y)
        {
            if(y%2==1)
                cout << y*y-(x-1) << endl;
            else
                cout << (y-1)*(y-1)+x << endl;
        }
        else
        {
            if(x%2==0)
                cout << x*x-(y-1) << endl;
            else
                cout << (x-1)*(x-1)+y << endl;
        }
}

    return 0;
}