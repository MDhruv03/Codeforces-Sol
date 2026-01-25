// Author: MDhruv03
// Problem: 1504B
// Time: 15:10 on 25/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string a,b;
        cin >> a >> b;

        vector<bool> canFlip(n);
        int count0 = 0, count1 = 0;
        for(int i = 0; i < n; ++i){
            if(a[i] == '0') count0++;
            else count1++;

            if(count0 == count1){
                canFlip[i] = true;
            }
        }

        bool lastFlip = false;
        bool possible = true;
        for(int i=n-1;i>=0;i--)
        {
            if(!lastFlip)
            {
                if(a[i]!=b[i])
                    if(canFlip[i])
                    {
                        lastFlip^=true;
                    }
                      else
                        {
                            possible=false;
                            break;
                        }    
            }
            else
            {
                if(a[i]==b[i])
                {
                    if(canFlip[i])
                        lastFlip^=true;
                     else
                {
                    possible=false;
                    break;
                }   
                }
                
            }              
        }

        cout << (possible ? "YES" : "NO") << '\n';

    }

    return 0;
}