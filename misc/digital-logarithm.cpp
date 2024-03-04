#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	priority_queue<int> a;
	priority_queue<int> b;
	int ans = 0;

	for (int i = 0; i < 2*n; i++) {
		int x;
		cin >> x;
		if (i >= n)
			b.push(x);
		else
			a.push(x);
	}

	while (!a.empty() && !b.empty()) {
		int x = a.top();
		int y = b.top();
		a.pop();
		b.pop();
		if (x != y) {
			if (x > y)
				a.push(to_string(x).size()), b.push(y);
			else
				b.push(to_string(y).size()), a.push(x);
			ans++;
		}
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
