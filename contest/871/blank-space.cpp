#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& x : a)
		cin >> x;
	int cur = 0, ans = 0;
	for (auto x : a) {
		if (x == 1)
			cur = 0;
		else
			cur++;
		ans = max(ans, cur);
	}
	cout << ans << "\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}













