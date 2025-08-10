// Author: MDhruv03
// Time: 23:23 on 08/08/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int tt;
  cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        int mini=INT_MAX;
        int l,r;
        int one=1,two=1;
        for(int i=1;i<n/2;i++)
        {
            l=i;
            r=n-i;
            if(mini>lcm(l,r))
            {
                mini=lcm(l,r);
                one =l;
                two=r;
            }

        }

        cout << one << " " << two << endl;
}

    return 0;
}