#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
	int n, m; cin >> n >> m;
	string s; cin >> s;
	string t; cin >> t;
	int num = 0;
	for (int i = 0; i < n - 1; i++)
		if (s[i] == s[i + 1])
			num++;
	for (int i = 0; i < m - 1; i++)
		if (t[i] == t[i + 1])
			num++;
	if (num == 0 || (num <= 1 && t.back() != s.back()))
		cout << YESn;
	else
		cout << NOn;
}
 
signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
