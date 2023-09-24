#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	cout << 1LL + n*(n + 1LL) - (n - 1LL) + 2*n << "\n";
	
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
