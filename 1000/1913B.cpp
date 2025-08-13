// Author: MDhruv03
// Time: 18:40 on 07/08/2025

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
        string s;
        cin >> s;
        int n=s.size();
        int zcount=0;
        int ocount=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                zcount++;
            else
            ocount++;    
        }
        int len=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1' && zcount>0){
                zcount--;
                len++;
            }
            else if(s[i]=='0' && ocount>0){
                ocount--;
                len++;
            }
            else
            {
                break;
            }
            
        }
        cout << n-len << endl;

}

    return 0;
}