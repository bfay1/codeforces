#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
	int n, s, r; cin >> n >> s >> r;
	vector<int> ans(n - 1, (r / (n - 1)));
	int rem = r - (n - 1) * (r / (n - 1));
	for (int i = 0; i < rem; i++) ans[i]++;
	for (auto n : ans) cout << n << " ";
	cout << s - r << "\n";
}
 
signed main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
