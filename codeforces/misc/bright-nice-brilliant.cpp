#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int tmp = i - 2;
		cout << 1 << " ";
		while (tmp-- > 0)
			cout << 0 << " ";
		if (i > 1)
			cout << 1;
		cout << "\n";
	}
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
