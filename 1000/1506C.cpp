// Author: MDhruv03
// Time: 11:59 on 06/01/2026

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
        string X,Y;
        cin >> X >> Y;
        if(X.length()<Y.length())
        {
            swap(X,Y);
        }
        int m=X.length();
        int n=Y.length();
        int dp[m+1][n+1];
        
        // initialization
        for(int i=0;i<=m;i++)
            dp[i][0]=0; 
        for(int j=0;j<=n;j++)
            dp[0][j]=0; 
        
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(X[i-1]==Y[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=0;                  
            }
        }
    	 int maxLen=0;
         for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
               maxLen=max(maxLen,dp[i][j]);
        }
        cout << m+n - 2*maxLen << endl;
}

    return 0;
}