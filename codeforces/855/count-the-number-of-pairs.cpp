#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int freq[58] = {0};
	for (auto c : s)
		freq[c - 'A']++;
	int ans = 0, extra = 0;
	for (int i = 0; i < 26; i++) {
		ans += min(freq[i], freq[i + 32]);
		extra += abs(freq[i] - freq[i + 32]) / 2;
	}
	cout << ans + min(k, extra) << "\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
