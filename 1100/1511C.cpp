#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

	int n, q;
	cin >> n >> q;

	// Vector to store the first position of each color, initialized to n+1
	vector<int> first_pos(51, n + 1);

	// Reading the deck and storing the first occurrence of each color
	for (int i = 1; i <= n; i++) { // Loop through each card in the deck
		int color;
		cin >> color;
		// If this is the first occurrence of the color, store its position
		if (first_pos[color] == n + 1) {
			first_pos[color] = i;
		}
	}

	// Process each query
	while (q--) { // Loop through each query
		int color;
		cin >> color;
		// Get the position of the first occurrence of the queried color
		int ans = first_pos[color];

		// Update the positions of all colors that are above the queried color
		for (int i = 1; i <= 50; i++) {
			if (first_pos[i] < ans) {
				first_pos[i]++;
			}
		}

		// Move the queried color to the top of the deck
		first_pos[color] = 1;

		// Output the position of the queried color
		cout << ans << " ";
	}

	cout << endl;

	// Time Complexity (TC): O(N + Q * 50)
	// Space Complexity (SC): O(50)
}
