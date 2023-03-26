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
	sort(a.begin(), a.end());
	if (count(a.begin(), a.end(), 0) == n) {
		cout << "No\n";
		return;
	}
	int l = 0, r = n - 1;
	int s = 0;
	vector<int> ans;
	while (l <= r) {
		if (s <= 0) {
			s += a[r];
			ans.push_back(a[r]);
			r--;
		} else {
			s += a[l];
			ans.push_back(a[l]);
			l++;
		}
	}
	cout << "Yes\n";
	for (int i = 0; i < n; i++)
		cout << ans[i] << " \n"[i == n - 1];
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--)
		solve();
}
