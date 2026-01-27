// Author: MDhruv03
// Problem: 1915E
// Time: 10:47 on 27/01/2026

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
	for (int i = 0; i < n; i++)
		cin >> v[i];

	vector<ll> prefixEven(n, 0), prefixOdd(n, 0);

	prefixEven[0] = v[0];
	int flag = 0;
	map<ll, int> mp;

	mp[prefixOdd[0] - prefixEven[0]]++;

	for (int i = 1; i < n; i++)
	{
		prefixOdd[i] += prefixOdd[i - 1];
		prefixEven[i] += prefixEven[i - 1];

		if (i % 2)
			prefixOdd[i] += v[i];
		else
			prefixEven[i] += v[i];

		mp[prefixOdd[i] - prefixEven[i]]++;
		if (mp[prefixOdd[i] - prefixEven[i]] == 2 || prefixOdd[i] - prefixEven[i] == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
    }

    return 0;
}