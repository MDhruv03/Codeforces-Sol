// Author: MDhruv03
// Time: 22:42 on 06/08/2025

#include <bits/stdc++.h>
#include <iterator>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int tt;
  cin >> tt;
    while (tt--){

        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        map<ll, ll> freq;
        for(int i=0;i<n;i++) 
            freq[a[i]]++; 
            
        if(freq.size()>=3)
            cout << "No" << endl;
        else
        {
            ll freq1=freq.begin()->second;
            ll freq2=freq.rbegin()->second;

            if(freq1==freq2)
                cout << "Yes" << endl;
            else if(n%2==1 && abs(freq1-freq2)==1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;        

        }    
            
        }
        return 0;
}

