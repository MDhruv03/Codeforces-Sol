// Author: MDhruv03
// Time: 22:44 on 08/08/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

 int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> pref(n), suff(n);
        set<char> st;
        int counter = 0;

        // prefix
        for (int i = 0; i < n; i++) {
            if (!st.count(s[i])) {
                counter++;
                st.insert(s[i]);
            }
            pref[i] = counter;
        }
        
        st.clear();
        counter = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (!st.count(s[i])) {
                counter++;
                st.insert(s[i]);
            }
            suff[i] = counter;
        }

        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, pref[i] + suff[i + 1]);
        }
        cout << ans << "\n";
    }
    return 0;
}

// 1 2 3 4 5 6 6 7 8 9
// 9 8 7 6 5 4 4 3 2 1