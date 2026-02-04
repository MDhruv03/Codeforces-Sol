// Author: MDhruv03
// Problem: 1837D
// Time: 20:42 on 04/02/2026

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
        vector<int> count(n);
        count[0]=(s[0]=='(')?1:-1;
        for(int i=1;i<n;i++)
            count[i]=count[i-1]+((s[i]=='(')?1:-1);
        
        if(count[n-1]!=0)
        {
            cout << -1 << endl;
            continue;
        }
        int mini = *min_element(count.begin(),count.end());
        int maxi = *max_element(count.begin(),count.end());
        if(maxi==0 || mini==0)
        {
            cout << 1 << endl;
            for(int i=0;i<n;i++)
                cout << 1 << ' ';
            cout << endl;
            continue;
        }
        cout << 2 << endl;
        for(int i=0;i<n;i++)
        {
            if(count[i]>0)
                cout << 1 << ' ';
            else if(count[i]<0)
                cout << 2 << ' ';
            else 
                cout << (count[i-1]>0?1:2) << ' ';
        }
        cout << endl;
    }

    return 0;
}