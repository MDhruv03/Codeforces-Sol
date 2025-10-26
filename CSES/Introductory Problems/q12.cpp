// Author: MDhruv03
// Time: 18:36 on 26/10/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

string s;
cin >> s;
map<char,int> mp;
for(auto x:s)
{
    mp[x]++;
}
int count=0;
char mid;
for(auto x:mp)
{
    if(x.second%2!=0)
    {
        count++;
        mid=x.first;
    }
}
if(count>1)
{
    cout << "NO SOLUTION" << endl;
    return 0;
}

string first_half="";
string second_half="";
for(auto x:mp)
{
        first_half+=string(x.second/2,x.first);
}
second_half=first_half;
reverse(second_half.begin(),second_half.end());
if(mid)
    cout << first_half + mid + second_half << endl;
else
    cout << first_half + second_half << endl;
return 0;
}