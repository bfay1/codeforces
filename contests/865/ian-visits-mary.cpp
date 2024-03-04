#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int a, b;
	cin >> a >> b;
	if (gcd(a, b) != 1) {
		cout << 2 << "\n" << a - 1 << " " << 1 << "\n";
	} else {
		cout << 1 << "\n";
	}
	cout << a << " " << b << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
