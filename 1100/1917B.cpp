// Author: MDhruv03
// Time: 23:11 on 08/01/2026

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
        int count = 0;
        set<char> seen;
        int result=0;
        for(char c : s) {
            if(seen.find(c) == seen.end()) {
                seen.insert(c);
                count++;
            }
            result+=count;
        }
        cout << result << endl;
}

    return 0;
}