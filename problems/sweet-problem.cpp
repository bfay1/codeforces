/*
 * NAME: jbrenda1
 * LANG: C++
 * TASK: skidesign
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int a, b, c;
	cin >> a >> b >> c;
	int mx = max(a, max(b, c)), rem = (a + b + c) - max(a, max(b, c));

	if (mx >= rem) {
		cout << rem << "\n";
		return;
	} else {
		cout << mx + (rem - mx) / 2 << "\n";
		return;
	}
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
