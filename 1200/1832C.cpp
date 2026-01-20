// Author: MDhruv03
// Problem: 1832C
// Time: 11:10 on 20/01/2026

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
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];

        if(v.size()==1){
            cout << 1 << '\n';
            continue;
        }

        vector<int> a;
        a.push_back(v[0]);
        a.push_back(v[1]);
        for(int i=2;i<n;i++){
            int size = a.size();
            int x  = a[size-2]  - a[size-1];
            int y = a[size-1] - v[i];
            if(x>0)
            {
                if (y>0) a[size-1]=v[i];
                else if(y<0) a.push_back(v[i]);
            }
            else
            {
                if (y<0) a[size-1]=v[i];
                else if(y>0) a.push_back(v[i]);
            }

        }
            int finalSize = a.size();
            if(a[0]==a[1])
                finalSize--;

            cout << finalSize << '\n';    

}
    return 0;
}