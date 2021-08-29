#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// use the sum formula to check if the sum of 1 to 'n' is already even
		cout << ((n * (n + 1)) / 2 % 2 == 0 ? n : n - 1) << '\n';
	}
	return 0;
}
