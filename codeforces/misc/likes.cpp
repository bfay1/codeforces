#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	int l = 0, d = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x > 0)
			l++;
		else
			d++;
	}
	for (int i = 1; i <= n; i++) {
		if (i <= l)
			cout << i << " ";
		else
			cout << 2 * l - i << " ";
	}
	cout << "\n";
	for (int i = 1; i <= n; i++) {
		if (i <= 2*d)
			cout << i % 2 << " \n"[i == n];
		else
			cout << i - 2*d << " \n"[i == n];
	}
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
