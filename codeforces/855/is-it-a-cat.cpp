#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n; cin >> n;
	string s; cin >> s;
	string v = "";
	for (auto c : s)
		if (v.empty() || tolower(c) != v.back())
			v.push_back(tolower(c));
	if (v == "meow")
		cout << "YES\n";
	else
		cout << "NO\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
