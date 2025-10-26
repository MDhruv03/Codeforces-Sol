// Author: MDhruv03
// Time: 10:08 on 26/10/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

string s;
cin >> s;
int count=0;
int maxi=0;
for(int i=1; i<s.length(); i++){
    if(s[i]==s[i-1]){
        count++;
        maxi = max(maxi, count);
    }
    else{
        count=0;
    }
}
cout << maxi+1 << endl;
    return 0;
}