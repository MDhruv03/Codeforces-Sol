// Author: MDhruv03
// Time: 18:13 on 08/01/2026

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
    string s;
    cin >> s;
    int leftcount=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            leftcount++;
        }
        else
        {
            if(leftcount>0)
            {
                leftcount--;
            }
            else
                count++;
        }
    }
    cout << count << endl;
}

    return 0;
}