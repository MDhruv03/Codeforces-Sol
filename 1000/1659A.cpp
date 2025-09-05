// Author: MDhruv03
// Time: 19:17 on 04/09/2025

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
        
        string ans="";
        if(b!=1)
        {
            int repeat=r/b;
        int rem=r%b;
        if(rem==0)
        {
            repeat-=1;
            rem=b;
        }
        string segment="";
        for(int i=0;i<repeat;i++) segment+='R';
        segment+='B';
        for(int i=0;i<b;i++){
            ans+=segment;
        }
        for(int i=0;i<rem;i++) ans+='R';
        }
        else{
            for(int i=0;i<r;i++) ans+='R';
            ans[r/2]='B';
            ans+='R';
        }
        cout << ans << endl;
}

    return 0;
}