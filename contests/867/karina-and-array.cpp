#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& x : a)
		cin >> x;
	sort(a.rbegin(), a.rend());

	cout << max(a[0] * a[1], a[n - 1] * a[n - 2]) << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
