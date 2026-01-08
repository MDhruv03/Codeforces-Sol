// Author: MDhruv03
// Time: 16:07 on 08/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long result=0;
        int neg=0;
        int mini=INT_MAX;
        for( int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                result+=abs(matrix[i][j]);
                if(matrix[i][j]<0)
                    neg++;
                mini=min(mini,abs(matrix[i][j]));    
            }
        }
        return (neg % 2 == 0) ? result : result- 2LL * mini;
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int tt;
  cin >> tt;
    while (tt--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }
        cout << maxMatrixSum(matrix) << endl;
}

    return 0;
}