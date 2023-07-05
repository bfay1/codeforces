#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	vector<int> a;
	int x;
	cin >> x;
	a.push_back(x);
	for (int i = 1; i < n; i++) {
		int x;
		cin >> x;
		if (x != a.back())
			a.push_back(x);
	}

	int sz = a.size();
	int ans = min(sz, 2LL);

	for (int i = 1; i < sz- 1; i++) {
		bool mx = a[i] > a[i + 1] && a[i] > a[i - 1];
		bool mn = a[i] < a[i + 1] && a[i] < a[i - 1];
		if (mx || mn)
			ans++;
	}

	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}






















