#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;

	vector<int> a(n);
	vector<int> b(n);

	for (auto& x : a)
		cin >> x;
	for (auto& y : b)
		cin >> y;

	multiset<int> ms;
	int delta = 0;

	for (int i = 0; i < n; i++) {
		ms.insert(a[i] - delta);
		int ans = 0;

		while (!ms.empty() && *ms.begin() + delta <= b[i]) {
			ans += *ms.begin() + delta;
			ms.erase(ms.begin());
		}

		ans += (int) ms.size() * b[i];
		delta -= b[i];
		cout << ans << " \n"[i == n - 1];
	}
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}






















