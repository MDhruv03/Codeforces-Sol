// Author: MDhruv03
// Problem: 1527B1
// Time: 10:57 on 25/01/2026

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
        string s;
        cin >> s;

        int count0 = 0, count1 = 0;
        for(char c : s){
            if(c == '0') count0++;
            else count1++;
        }

        if(count0==1 || count0%2==0)
            cout << "BOB" << '\n';
        else
            cout << "ALICE" << '\n';    
    }

    return 0;
}