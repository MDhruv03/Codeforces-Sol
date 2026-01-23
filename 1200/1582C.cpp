// Author: MDhruv03
// Problem: 1582C
// Time: 11:00 on 23/01/2026

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

        int answer = INT_MAX;
        for(char c='a' ; c<='z'; c++)
        {
            int left = 0, right = n-1;
            int moves = 0;
            while(left < right)
            {
                if(s[left] == s[right])
                {
                    left++;
                    right--;
                }
                else if(s[left] == c)
                {
                    moves++;
                    left++;
                }
                else if(s[right] == c)
                {
                    moves++;
                    right--;
                }
                else
                {
                    moves = INT_MAX;
                    break;
                }
            }
            answer = min(answer, moves);
        }
        if(answer == INT_MAX)
            cout << -1 << endl;
        else
            cout << answer << endl;
    }

    return 0;
}