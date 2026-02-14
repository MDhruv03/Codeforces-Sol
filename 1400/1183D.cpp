// Author: MDhruv03
// Problem: 1183D
// Time: 14:24 on 14/02/2026

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
        map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }
        set<int> unique_elements;
        ll answer=0;
        for(auto it : freq)
        {
            while(unique_elements.count(it.second) && it.second>0)
            {
                it.second--;
            }
            unique_elements.insert(it.second);
            answer+=it.second;
        }  

        cout << answer << endl;
    }

    return 0;
}


//2 1 3 3 4 3 4 4 1 3 2 2 2 4 1 1
//1 1 1 1 2 2 2 2 3 3 3 3 4 4 4 4