// Author: MDhruv03
// Problem: temp
// Time: 15:05 on 01/03/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        for(char c : s) {
            if(st.empty() || st.top() != c) {
                st.push(c);
            } else {
                st.pop();
            }
        }
        cout << (st.empty() ? "YES" : "NO") << endl;
    }

    return 0;
}