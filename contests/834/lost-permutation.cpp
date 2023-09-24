#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int m, s;
	cin >> m >> s;
	vector<int> b(m);
	for (auto& x : b)
		cin >> x;
	set<int> st;
	int mx = INT_MIN;
	int mn = INT_MAX;
	for (auto x : b) {
		st.insert(x);
		mx = max(mx, x);
		mn = min(mn, x);
	}
	for (int i = 1; i < mx; i++) {
		if (st.find(i) == st.end())
			s -= i;
		st.insert(i);
		if (s < 0) {
			cout << "NO\n";
			return;
		}
	}
	if (s == 0) {
		cout << "YES\n";
		return;
	}
	for (int i = mx + 1; i <= 1000; i++) {
		s -= i;
		if (s == 0) {
			cout << "YES\n";
			return;
		} else if (s < 0) {
			cout << "NO\n";
			return;
		}
	}
	cout << "NO\n";
		
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
