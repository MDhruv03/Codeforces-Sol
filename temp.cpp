// Author: MDhruv03
// Problem: temp
// Time: 15:16 on 08/02/2026

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
        int n,m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        int ones=0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
                if(grid[i][j]==1)
                    ones++;
            }
        }
        int result=0;
        if(ones%2==0)
            result=ones* ones/ 4;
        else
            result= (ones/2)* (ones/2 +1);
            
        int righthalf=0;
        bool flag=false;
        int i,j;
        for( i=0;i<n;i++)
        {
            for( j=m-1;j>=0;j--)
                if(grid[i][j]==1)
                {
                    righthalf++;
                    if(righthalf == ones/2)
                    {
                        flag=true;
                        break;
                    }
                }
            if(flag) break;
        }    

        cout << result << endl;
        int tempn=i;
        int tempm=j;
        int remm=m-j-1;
        int remn=n-i-1;
        while(tempn--)
            cout << "D";
        while(tempm--)
            cout << "R";
        cout << "D";
        cout << "R";
        while(remm--)
            cout << "R";
        while(remn--)
            cout << "D";
        cout << endl;        
    }

    return 0;
}