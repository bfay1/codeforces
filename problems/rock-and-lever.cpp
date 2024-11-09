#include <bits/stdc++.h>
using namespace std;
#define int long long

int hsb(int x)
{
	int ret = 0;
	while (x >>= 1)
		ret++;
	return ret;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> groups(64, 0);
	while (n--) {
		int x;
		cin >> x;
		groups[hsb(x)]++;
	}
	int ans = 0;
	for (int i = 0; i < 64; i++)
		ans += (groups[i] - 1)*groups[i]/2;
	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}			
