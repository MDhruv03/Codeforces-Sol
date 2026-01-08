// Author: MDhruv03
// Time: 18:51 on 08/01/2026

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
        ll a,b;
        cin >> a >> b;
        ll tempa=a;
        ll tempb=b;

        while(tempa%2==0)
        {
            tempa/=2;
        }
        while(tempb%2==0)
        {
            tempb/=2;
        }

        if(tempa!=tempb)
        {
            cout << -1 << endl;
            continue;
        }

        a/=tempa;
        b/=tempb;
        a=(log2(a));
        b=(log2(b));
        cout << ceil(abs(a - b) / 3.0) << endl;
}

    return 0;
}