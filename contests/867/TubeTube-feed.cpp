#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, t;
	cin >> n >> t;
	vector<int> a(n);
	vector<int> b(n);
	for (auto& x : a)
		cin >> x;
	for (auto& x : b)
		cin >> x;
	int ans = -1, mx = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (a[i] <= t && b[i] > mx)
			mx = b[i], ans = i + 1;
		t--;
		if (t <= 0)
			break;
	}
	cout << ans << "\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
