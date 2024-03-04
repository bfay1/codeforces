#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, ans = 0, sum = 0;
	cin >> n;

	priority_queue<int, vector<int>, greater<int>> even;
	priority_queue<int> odd;

	for (int i = 1, x; i <= n; i++) {


		int sz = odd.size() + even.size();

		if (x <= 0) {
			if (sz % 2 == 0)
				odd.push(x);
			else
				even.push(x);
		} else if (sz % 2 == 0) {
			cout << i << " " << x << "\n";
			sum += x;
		} else if (sz % 2 == 1) {

			int add = 0;

			if (even.empty() && !odd.empty()) {
				add = odd.top();
				odd.pop();
			} else if (!even.empty()) {
				even.pop();
			}

			if (0 < x + add) {
				sum += x + add;
			} else {
				even.push(x);
			}
		}

		ans = max(ans, sum);
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
