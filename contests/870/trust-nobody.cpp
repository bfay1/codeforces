#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& x : a)
		cin >> x;
	sort(a.begin(), a.end());
	int i = 0;
	int truth = 0;
	int liars = n;
	while (i < n - 1) {
		truth++;
		liars--;
		if (a[i] <= liars && a[i + 1] > liars)
			break;
		i++;
	}
	if (i == n - 1 && a.back() != 0)
		liars = -1;
	if (i == n - 1 && a.back() == 0)
		liars = 0;
	cout << liars << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}











