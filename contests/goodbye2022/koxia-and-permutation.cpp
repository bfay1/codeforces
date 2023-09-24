#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int l = 1, r = n;
		while (l < r) cout << r-- << " " << l++ << " ";
		if (n & 1) cout << n / 2 + 1;
		cout << "\n";
	}
	return 0;
}
