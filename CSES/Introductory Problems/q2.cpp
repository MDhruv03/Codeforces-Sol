// Author: MDhruv03
// Time: 17:10 on 06/08/2025
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
ll n;
  cin >> n;
  ll temp;
  ll sum=0;
  for(int i = 1; i < n; i++) {
    cin >> temp;
    sum += temp;
  }
 
  cout << (n * (n + 1)) / 2 - sum;
    return 0;
}