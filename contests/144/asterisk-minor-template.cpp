#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	string a; cin >> a;
	string b; cin >> b;
	if (a.back() == b.back()) {
		cout << "YES\n" << "*" << a.back() << "\n";
		return;
	} else if (a[0] == b[0]) {
		cout << "YES\n" << a[0] << "*" << "\n";
		return;
	}
	for (int i = 0; i < a.size() - 1; i++) {
		string c = "";
		c.push_back(a[i]);
		c.push_back(a[i + 1]);
		if (b.find(c) != -1) {
			cout << "YES\n" << "*" << c << "*\n";
			return;
		}
	}
	cout << "NO\n";
}
signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
