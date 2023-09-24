#include<bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);

	for (auto& x : a)
		cin >> x;
	for (auto& y : b)
		cin >> y;

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int i = 0, j = 0;
	int ans = 1, cur = 0;

	while (i < n && j < n) {
		if (a[i] > b[j]) {
			if (i == 0 || a[i] != a[i - 1])
				cur++;
			j++;
		} else {
			ans *= cur;
			ans %= mod;
			cur--;
			i++;
		}
	}

	if (i >= n) {
		ans *= cur;
		ans %= mod;
	}

	while (i < n) {
		ans *= n - i;
		ans %= mod;
		i++;
	}


	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}






















