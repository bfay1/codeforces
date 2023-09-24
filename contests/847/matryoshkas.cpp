
#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
	int n; cin >> n;
	
	vector<int> a(n);
	unordered_map<int, int> mp;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	
	int ans = 0;
	
	for (auto i : a) {
		if (mp[i - 1] <= 0) {
			ans++;
		} else {
			mp[i - 1]--;
		}	
	}
	
	cout << ans << "\n";
	
}
 
signed main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
