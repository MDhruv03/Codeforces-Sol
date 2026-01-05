// Author: MDhruv03
// Time: 18:24 on 05/01/2026

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
        int n,r,b;
        cin >> n >> r >> b;
        string s="";
        int repeat=r/(b+1);
        int extra=r%(b+1);
        for(int i=1;i<=b+1;i++){
            for(int j=0;j<repeat;j++) s+='R';
            if(extra>0){
                s+='R';
                extra--;
            }
            if(i!=b+1) s+='B';
        }
        cout << s << endl;
}

    return 0;
}