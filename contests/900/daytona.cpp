#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	string ans = "NO\n";

	cin >> n >> k;

	for (int i = 0, x; i < n; i++) {
		cin >> x;
		if (x == k)
			ans = "YES\n";
	}

	cout << ans;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
