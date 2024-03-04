#include <bits/stdc++.h>
using namespace std;
#define MAXN 1005
#define int long long

void solve()
{
	int n, ans = 0, odd = 0, x;
	cin >> n;
	vector<int> freq(10000000);
	
	map<int, int> mp;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		for (int j = 2; j*j <= x; j += x) {
			while (x % j == 0) {
				mp[j]++;
				x /= j;
			}
		}
	}

	for (pair<int, int> p : mp) {
		ans += p.second / 2;
		odd += p.second % 2;
	}
	cout << ans + odd / 3 << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
