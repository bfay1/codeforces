#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	string fb = "";
	for (int i = 1; i <= 500; i++) {
		if (i % 3 == 0)
			fb.push_back('F');
		if (i % 5 == 0)
			fb.push_back('B');
	}
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) {
		int k; cin >> k;
		string s; cin >> s;
		cout << (fb.find(s) == -1 ? "NO\n" : "YES\n");
	}
}
