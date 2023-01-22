#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n; cin >> n;
	string s; cin >> s;
	int lmr = INT_MAX, rml = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'R') lmr = min(lmr, i + 1);
		if (s[i] == 'L') rml = i + 1;
	}
	if (lmr < rml) {
		cout << 0 << "\n";
	} else if (lmr == rml + 1){
		cout << rml << "\n";
	} else {
		cout << -1 << "\n";
	}
}
 
int main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
