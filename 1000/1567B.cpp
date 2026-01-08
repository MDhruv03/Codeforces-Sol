// Author: MDhruv03
// Time: 23:07 on 08/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll xor_till(ll n)
{
    if (n % 4 == 0)
        return n;
    else if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int tt;
  cin >> tt;
    while (tt--){
        ll a,b;
        cin >> a >> b;
        ll xor_arr = xor_till(a-1);

        if(xor_arr == b)
        {
            cout << a << endl;
        }
        else if((xor_arr ^ b) != a)
        {
            cout << a+1<< endl;
        }
        else
        {
            cout << a+2 << endl;
        }

}

    return 0;
}