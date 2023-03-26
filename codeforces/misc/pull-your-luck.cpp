#include <bits/stdc++.h>
using namespace std;
#define int long long

int tri[1000001];

void solve()
{
	int n, x, p;
	cin >> n >> x >> p;
	for (int i = 1; i <= min(2*n, p); i++) {
		if ((int)(tri[i] + x) % n == 0) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	for (int i = 1; i <= 100000; i++) {
		tri[i] = i*(i + 1)/2;
	}
	while (t--)
		solve();
}
