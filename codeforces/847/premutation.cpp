#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
	int n; cin >> n;
	
	vector<vector<int>> cols(n - 1);
 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			int x; cin >> x;
			cols[j].push_back(x);
		}
	}	
	unordered_map<int, int> mp;
	unordered_set<int> st;
	int max_freq = 0, mce;
	for (int i = 0; i < n; i++) {
		int x = cols[0][i];
		int y = ++mp[x];
		st.insert(x);
		if (y > max_freq) {
			max_freq = y;
			mce = x;
		}
	}
	vector<int> ans;
	ans.push_back(mce);
	for (auto n : st) if (n != mce) ans.push_back(n);
	
	for (int j = 0; j < n - 1; j++) {
		for (int i = 0; i < n; i++) {
			int x = cols[j][i];
			if (st.find(x) == st.end()) {
				ans.push_back(x);
				st.insert(x);
			}
		}
	}	
	
 
	for (auto n : ans) cout << n << " ";
	cout << "\n";
}
 
signed main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
