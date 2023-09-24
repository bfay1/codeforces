#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	set<char> st;
	string s = "codeforces";
	for (auto c : s) st.insert(c);
	while (t--) {
		char c;
		cin >> c;
		if (st.find(c) != st.end()) {
			cout << "YES\n";
		} else cout << "NO\n";
	}
	
	return 0;
}
