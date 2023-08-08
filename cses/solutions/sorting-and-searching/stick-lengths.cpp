#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& x : a)
		cin >> x;

	int l = 0, r = LLONG_MAX, ans = LLONG_MAX;

	function <int(int)> f = [&] (int x) {
		int ret = 0;
		for (auto& y : a)
			ret += abs(x - y);
		return ret;
	};

	while (l <= r) {
		int x = midpoint(l, r);
		int f0 = f(x), f1 = f(x + 1);
		ans = min(abs(f0), abs(ans));
		if (f0 < f1)
			r = x - 1;
		else
			l = x + 1;
	}

	cout << ans << "\n";
}









