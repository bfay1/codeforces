
#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
	string s; cin >> s;
	string pi = "314159265358979323846264338327";
	int i = 0;
	while (i < 30) {
		if (s[i] == pi[i]) i++;
		else break;
	}
	cout << i << "\n";
}
 
signed main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
