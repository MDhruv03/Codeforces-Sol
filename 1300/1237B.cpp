// Author: MDhruv03
// Problem: 1237B
// Time: 14:55 on 01/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int n;
        cin >> n;
        vector<int> a(n),b(n);
        map<int,int> positions;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            positions[a[i]] = i;
        }

        vector<int> c(n);
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
           c[positions[b[i]]] = i;
        }

        int maxShift = c[0];
        int answer = 0;
        for(int i=0;i<n;i++)
        {
            if(c[i]<maxShift)
                answer++;
            maxShift = max(maxShift, c[i]);
        }
        cout << answer << endl;   

    return 0;
}