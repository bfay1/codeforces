#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
	int n; cin >> n;
	string s;
	cin >> s;
	int ans = n;
	int l = 0;
	int r = n - 1;
	while (l < r && s[l] != s[r]) {
		ans -= 2;
		l++;
		r--;
	}
	cout << ans << "\n";
}
 
signed main() {
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
