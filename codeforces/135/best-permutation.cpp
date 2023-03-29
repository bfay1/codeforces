#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	iota(a.begin(), a.end(), 1);
	if (n <= 3) {
		for (int i = 1; i <= n; i++)
			cout << i << " \n"[i == n];
	} else {
		int l = 1, r = n - 2;
		if (n % 2 == 0) {
			for (int i = 1; i <= n - 2; i += 2)
				cout << i + 1 << " " << i << " ";
		} else {
			cout << 1 << " ";
			for (int i = 2; i < n - 2; i += 2)
				cout << i + 1 << " " << i << " ";
		}
		cout << n - 1 << " " << n << "\n";
	}
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
