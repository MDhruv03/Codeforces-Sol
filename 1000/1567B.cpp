// Author: MDhruv03
// Time: 11:54 on 06/01/2026

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
        int a,b;
        cin >> a >> b;

        int result=a;
        if(a==b)
            result+=2;
        else
            result++;
            
        cout << result << endl;    
}

    return 0;
}