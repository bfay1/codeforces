#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	if (n % 2) {
		cout << (n == 1 ? 1 : -1) << "\n";
		return;
	}

	int i = 0;
	while (i < n) {
		cout << n - i << " " << 1 + i << " \n"[i == n - 2];
		i += 2;
	}
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
