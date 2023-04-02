/*
 * NAME: jbrenda1
 * LANG: C++
 * TASK: skidesign
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

void solve()
{
	int n, m;
	cin >> n >> m;
	set<double> lines;
	
	while (n--) {
		int x;
		cin >> x;
		lines.insert(x);
	}
	
	while (m--) {
		int a, b, c;
		cin >> a >> b >> c;
		
		if (c < 0) {
			cout << "NO\n";
			continue;
		}
		
		auto k = lines.upper_bound(b - 2*sqrt(a * c));
		
		if (k == lines.end() || *k >= b + 2*sqrt(a * c))
			cout << "NO\n";
		else
			cout << "YES\n" << (int) *k << "\n";
	}
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
