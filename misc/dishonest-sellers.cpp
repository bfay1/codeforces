#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve();

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int n, k, ans = 0; cin >> n >> k;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i].first;
	for (int i = 0; i < n; i++)
		cin >> a[i].second;
	sort(a.begin(), a.end(), [&] (pair<int, int> x, pair<int, int> y) { return x.first - x.second < y.first - y.second; });
	
	for (int i = 0; i < n; i++)
		ans += i < k || a[i].first < a[i].second ? a[i].first : a[i].second;
	
	cout << ans << "\n";
}
