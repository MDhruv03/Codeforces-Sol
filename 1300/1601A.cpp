// Author: MDhruv03
// Problem: 1601A
// Time: 22:11 on 02/02/2026

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
		map<int, int> mp; 
		for (int i = 0; i < n; i++) { 
			int temp; 
			cin >> temp; 
			for (int j = 0; j < 31; j++) { 
				if (temp & (1 << j)) { 
					mp[j]++; 
				}
			}
		}
		int gcd = 0; 
		int f = 1; 
		for (auto i : mp) { 
			f = 0; 
			if (gcd == 0) {
				gcd = i.second; 
			} else {
				gcd = __gcd(gcd, i.second);
			}
		}
		if (f) { 
			for (int i = 0; i < n; i++) { 
				cout << i + 1 << " ";
			}
			cout << "\n";
			continue;
		}

		vector<int> factors; 
		for (int i = 1; i * i <= gcd; i++) { 
			if (gcd % i == 0) {
				factors.push_back(i);
				if (i != gcd / i)
					factors.push_back(gcd / i);
			}
		}
		sort(factors.begin(), factors.end());
		for (int f : factors) {
			cout << f << " ";
		}
		cout << "\n";
    }

    return 0;
}