#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, m;
	cin >> n >> m;
	int one = 0;
	int two = 0;
	int empty = m;
	int ans = 0;
	vector<int> seats(m + 2);
	seats[0] = seats[m + 1] = 1;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == -1)
			one++;
		else if (x == -2)
			two++;
		else if (x > 0) {
			if (seats[x] == 0)
				ans++, empty--;
			seats[x] = 1;
		}
	}

	int cur = 0;
	int left = 0;
	for (int i = 0; i <= m + 1; i++) {
		if (seats[i] == 0) {
			left++;
		} else {
			int right = empty - left;
			cur = max(cur, min(two, right) + min(one, left));
		}
	}

	ans += cur;

	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
