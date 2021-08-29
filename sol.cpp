#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	//check if the sum of 1 to n is even, if not then, subtract 1 from n
	cout << ((n*(n+1)/2)%2==0?n:n-1) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
