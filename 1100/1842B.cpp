// Author: MDhruv03
// Time: 15:48 on 11/01/2026

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
        int n,x;
        cin >> n >> x;
        vector<int> stacks[3];
        for(int i=0;i<3;i++)
        {
            int s=0;
            stacks[i].push_back(s);
            for(int j=0;j<n;j++){
                int val;
                cin >> val;
                if((s | val) != s)
                {
                    stacks[i].push_back(s | val);
                    s = s | val;
                }
            }
        }
        bool ans = false;
        for(int A : stacks[0])
        {
            for(int B : stacks[1])
            {
                for(int C : stacks[2])
                {
                    if((A | B | C) == x)
                    {
                        ans = true;
                        break;
                        
                    }
                }
            }
        }
        cout << (ans ? "Yes" : "No") << endl;
    }

    return 0;
}