// Author: MDhruv03
// Time: 18:00 on 10/08/2025

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
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;

        s+=s;
        n*=2;
        int last=-1;
        int maxi=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
           if(s[i]=='g')
            last=i;

           if(s[i]==c)
           {
            maxi=max(maxi, last-i);
           } 
            }

            cout << maxi << endl;
}
        return 0;
    }

