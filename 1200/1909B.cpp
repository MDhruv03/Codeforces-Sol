// Author: MDhruv03
// Problem: 1909B
// Time: 12:25 on 17/01/2026

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
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        ll result=0;
        for(int i =1;i<=60;i++)
        {
            set<ll> st;
            ll temp = 1LL << i;
            for(int i=0;i<n;i++)
            {
                if(st.find(a[i]%temp)==st.end())
                    st.insert(a[i]%temp);
                
                if(st.size()>2)
                {
                    st.clear();
                    break;
                }
            }
              if(st.size()==2)
                {
                    result=temp;
                    break;
                }
        }

        cout << result << '\n';
    }

    return 0;
}