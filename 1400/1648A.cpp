// Author: MDhruv03
// Problem: 1648A
// Time: 18:02 on 09/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int n,m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
                grid[i][j]--;
            }
        }

         vector<vector<int>> rows(1e5);
         vector<vector<int>> cols(1e5);
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                 rows[grid[i][j]].push_back(i);
                 cols[grid[i][j]].push_back(j);
             }
         }
         
         ll answer=0;
         for(int color=0;color<1e5;color++)
         {
             sort(rows[color].begin(),rows[color].end(),greater<int>());
             sort(cols[color].begin(),cols[color].end(),greater<int>());
             int temp = rows[color].size();
             for(int i=0,j=temp-1;i<temp;i++,j-=2)
                 answer+= (ll)rows[color][i]*j;
             temp= cols[color].size();
             for(int i=0,j=temp-1;i<temp;i++,j-=2)
                answer+= (ll)cols[color][i]*j;    
    }
        cout << answer << endl;
    return 0;
}