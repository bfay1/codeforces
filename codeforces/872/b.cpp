#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n*m);
	for (auto& x : a)
		cin >> x;
	sort(a.begin(), a.end());
	int p = a[0];
	int q = a[1];
	int r = a[n*m - 2];
	int s = a.back();
	int x = (s - p)*(max(n, m) - 1);
	int y = (r - p)*(min(n, m) - 1);
	int z = (s - q)*(min(n, m) - 1);
	int rem = (s - p)*(n - 1)*(m - 1);
	cout << x + max(y, z) + rem << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
