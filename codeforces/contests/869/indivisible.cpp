#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	if (n % 2) {
		cout << (n == 1 ? 1 : -1) << "\n";
		return;
	}
	
	for (int i = 0; i < n - 1; i += 2)
		cout << n - i - 1 << " " << n - i << " \n"[i == n - 2];
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
