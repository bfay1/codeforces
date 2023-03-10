#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, ans = 0; cin >> n;
	unordered_set<int> st;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (st.find(x) == st.end())
			ans++, st.insert(x);
		else
			ans += st.find(-x) == st.end(), st.insert(-x);
	}
	cout << ans << "\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
