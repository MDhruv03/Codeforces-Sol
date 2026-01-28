// Author: MDhruv03
// Problem: 1879C
// Time: 22:06 on 27/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
const int MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        string s;
        cin >> s;

        int n = s.length();
        int count = 1;
        int answerLen=1;
        ll answer=1;
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                answerLen++;
                answer=(answer*count)%MOD;
                count=1;
            }
            else
                count++;
        }

        answer = (answer*count)%MOD;
        for(int i=1;i<=n-answerLen;i++)
            answer=(answer*i)%MOD;
        cout << n-answerLen << " " << answer << endl;
    }

    return 0;
}