// Author: MDhruv03
// Problem: 1703E
// Time: 18:14 on 21/01/2026

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
        vector<vector<char>> grid(n, vector<char>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin >> grid[i][j];
            int operations = 0;
            for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < (n + 1) / 2; j++) {
                int a = grid[i][j] - '0';
                int b = grid[j][n - 1 - i] - '0';
                int c = grid[n - 1 - i][n - 1 - j] - '0';
                int d = grid[n - 1 - j][i] - '0';
                int ones = a + b + c + d;
                operations += min(ones, 4 - ones);
            }
            }
        cout << operations << '\n';
    }

    return 0;
}