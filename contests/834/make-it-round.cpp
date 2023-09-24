#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, m, twos = 0, fives = 0, tmp, k = 1;
	cin >> n >> m;
	tmp = n;
	while (tmp && tmp % 2 == 0)
		tmp /= 2, twos++;
	while (tmp && tmp % 5 == 0)
		tmp /= 5, fives++;
	while (k * 5 <= m && fives < twos)
		k *= 5, fives++;
	while (k * 2 <= m && twos < fives)
		k *= 2, twos++;
	while (k * 10 <= m)
		k *= 10;
	k *= (m / k);
	int ans = n * k;
	if (ans % 10)
		ans = n * m;
	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
