#include <bits/stdc++.h>
using namespace std;
const long long mod = 998244353;
 
void solve() {
	vector<vector<int>> m(2, vector<int>(2, 0));
	cin >> m[0][0] >> m[1][0] >> m[0][1] >> m[1][1];
	function<vector<vector<int>>(vector<vector<int>>&)>
	rot90 = [&] (vector<vector<int>>& a) {
		vector<vector<int>> b = {{a[1][0], a[0][0]}, {a[1][1], a[0][1]}};
		return b;
	};
 
	function<bool(vector<vector<int>>&)>
	is_beaut = [&] (vector<vector<int>>& a) {
		return (a[0][0] < a[0][1] && a[0][0] < a[1][0] && a[0][1] < a[1][1] && a[1][0] < a[1][1]);
	};
 
	for (int i = 0; i < 4; i++) {
		m = rot90(m);
		if (is_beaut(m)) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
	return;
}
 
int main()
{
	long long t;
	cin >> t;
	while (t--) solve();
	return 0;
}
