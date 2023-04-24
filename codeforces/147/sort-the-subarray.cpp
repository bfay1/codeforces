#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);

	for (auto& x : a)
		cin >> x;
	for (auto& x : b)
		cin >> x;

	int l = 0, r = 0;
	vector<int> dp(n, 1);

	vector<int> dec(n);

	int last = 0;

	dec[0] = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] < a[i - 1])
			last = i;
		dec[i] = last;
	}

	for (int i = 1; i < n; i++) {
		if (b[i] >= b[i - 1]) {
			dp[i] = dp[i - 1] + 1;
			int dist = r - l + 1;
			if (i - dp[i] + 1 < dec[i] && dist < dp[i])
				l = i - dp[i] + 2, r = i + 1;
		}
	}

	if (l == 0 && r == 0)
		cout << 1 << " " << 1 << "\n";
	else
		cout << l << " " << r << "\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
