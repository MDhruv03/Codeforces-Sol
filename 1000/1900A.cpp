// Author: MDhruv03
// Time: 19:00 on 04/08/2025

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
        vector<char> s(n);
        for(int i=0;i<n;i++ )
            cin >> s[i];
        
       int i = 0, times = 0;
        while (i < n) {
            if (s[i] == '.') {
                int count = 0;
                while (i < n && s[i] == '.') {
                    count++;
                    i++;
                }
                times += min(2, count);
                if(count >2 ) break;
            } else {
                i++;
            }
        }

        cout << times << '\n';
    }
    return 0;
}
