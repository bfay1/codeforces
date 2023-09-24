#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 998244353;

void solve()
{
	int n, temp;
	cin >> n;
	vector<int> s(n);
	vector<int> f(n);
	vector<int> ans(n);
	
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < n; i++)
		cin >> f[i];
	for (int i = 0; i < n; i++)
		cout << f[i] - max(s[i], i ? f[i - 1] : 0) << " \n"[i == n - 1];
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
