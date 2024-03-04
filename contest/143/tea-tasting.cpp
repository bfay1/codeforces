/*
 * =====================================================================================
 *
 *       Filename:  tea-tasting.cpp
 *        Created:  02/17/2023 09:02:49 AM
 *         Author:  brendan 
 *
 * =====================================================================================
 */
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	multiset<int> s;
	int delta = 0;
	for (int i = 0; i < n; i++) {
		s.insert(a[i] - delta);
		int ans = 0;
		while (s.empty() == false && *s.begin() + delta <= b[i]) {
			ans += *s.begin() + delta;
			s.erase(s.begin());
		}
		ans += (int) s.size() * b[i];
		delta -= b[i];
		cout << ans << " \n"[i == n - 1];
	}
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
