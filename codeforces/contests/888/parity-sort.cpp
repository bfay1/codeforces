#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (auto& x : a)
		cin >> x;

	copy(a.begin(), a.end(), b.begin());
	sort(b.begin(), b.end());

	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != b[i] % 2) {
			cout << "NO\n";
			return;
		}
	}

	cout << "YES\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
