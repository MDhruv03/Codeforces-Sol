// Author: MDhruv03
// Problem: temp
// Time: 20:40 on 26/02/2026

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
        vector<vector<int>> blogs(n);
        int totalL = 0;
        for (int i = 0; i < n; ++i) {
            int l; cin >> l;
            totalL += l;
            blogs[i].resize(l);
            for (int j = 0; j < l; ++j) cin >> blogs[i][j];
        }
        vector<vector<int>> R(n);
        for (int i = 0; i < n; ++i) {
            unordered_set<int> seen_in;
            for (int j = (int)blogs[i].size() - 1; j >= 0; --j) {
                int v = blogs[i][j];
                if (!seen_in.count(v)) {
                    R[i].push_back(v);   
                    seen_in.insert(v);
                }
            }

        }

        vector<int> ans;
        unordered_set<int> global_seen;
        vector<char> used(n, 0);

        while (true) {
            int pick = -1;
            vector<int> bestSeq;

            for (int i = 0; i < n; ++i) {
                if (used[i]) continue;
                vector<int> cur;
                cur.reserve(R[i].size());
                for (int x : R[i]) {
                    if (!global_seen.count(x)) cur.push_back(x);
                }
                if (cur.empty()) continue;
                if (pick == -1 || cur < bestSeq) {
                    pick = i;
                    bestSeq = std::move(cur);
                }
            }

            if (pick == -1) break;
            for (int v : bestSeq) {
                if (!global_seen.count(v)) {
                    ans.push_back(v);
                    global_seen.insert(v);
                }
            }
            used[pick] = 1;
        }
        for (int v : ans) cout << v << ' ';
        cout << '\n';
    }

    return 0;
}