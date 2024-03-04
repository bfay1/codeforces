#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;

	if (n % 2 == 0) {
		cout << "NO\n";
		return;
	}

	cout << "YES\n";

	set<int> nums;
	vector<int> targets(2*n*(2*n + 1));

	for (int i = 1; i <= 2*n; i++)
		nums.insert(i);

	for (int i = 0; i < n / 2; i++) {
		targets[2*n + 1 - i] = 1;
		targets[2*n + 1 + i] = 1;
	}

	for (int i = 0; i < n; i++) {
		int x = *nums.lower_bound(1);
		while (targets[x + (2*n - i)] == 0)
			x = *nums.lower_bound(x + 1);

		cout << x << " " << 2*n - i << "\n";

		nums.erase(x);
		targets[x + (2*n - i)] = 0;
	}
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}






















