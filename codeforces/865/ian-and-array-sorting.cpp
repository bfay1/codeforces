#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto &x : a)
		cin >> x;

	for (int i = 1; i < n - 1; i++) {
		int d = a[i - 1] - a[i];
		a[i + 1] += d;
		a[i] += d;
	}

	if (a[n - 2] <= a[n - 1] || n % 2)
		cout << "YES\n";
	else
		cout << "NO\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
