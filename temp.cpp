// Author: MDhruv03
// Time: 19:06 on 30/08/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int n;
cin >> n;
vector<string> arr(n);
for (int i = 0; i < n; i++) cin >> arr[i];

int x;
cin >> x;
string y;
cin >> y;
if (x >= 1 && x <= n && arr[x-1] == y) cout << "YES\n";
else cout << "NO\n";
    return 0;
}