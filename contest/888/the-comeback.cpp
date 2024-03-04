#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, k, start = -1, last = -1;
	int x = 0, y = 0;
	cin >> n >> k;
	vector<int> a(n);

	for (auto& x : a)
		cin >> x;

	for (int i = 0; i < n; i++) {
		if (a[i] == a[0])
			x++;
		if (x == k) {
			start = i;
			break;
		}
	}

	for (int i = n - 1; 0 <= i; i--) {
		if (a[i] == a.back())
			y++;
		if (y == k) {
			last = i;
			break;
		}
	}

	if (0 <= last && 0 <= start && (start < last || (k <= count(a.begin(), a.end(), a[0]) && a[0] == a.back())))
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
