// Author: MDhruv03
// Problem: 665C
// Time: 21:01 on 02/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    ll n = s.length();
    vector<char> answer(n);
    answer[0]=s[0];
    for( int i=1;i<n;i++)
    {
        if(s[i]==answer[i-1])
        {
            for(char ch='a';ch<='z';ch++)
            {
                if(ch!=s[i])
                {
                    if(i==n-1)
                    {
                        answer[i]=ch;
                        break;
                    }
                    else if(ch!=s[i+1])
                    {
                        answer[i]=ch;
                        break;
                    }
                }
            }
        }
            else
                    answer[i]=s[i];
                    
    }

    for(char ch : answer)
        cout << ch;
        cout << endl;

    return 0;
}