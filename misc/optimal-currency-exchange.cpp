#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n, d, e;
	cin >> n >> d >> e;
	int ans = INT_MAX;
	for (int i = 0; i <= n; i += d)
		ans = min(ans, (n - i) % (5*e));
	for (int i = 0; i <= n; i += 5*e)
		ans = min(ans, (n - i) % d);
	cout << ans << "\n";
}
