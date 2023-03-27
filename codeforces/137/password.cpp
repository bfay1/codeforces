
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n = 0, t = 0; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
	}
	
	n = 10 - n;
	cout << 3*n*n - 3*n << "\n";
	
}
 
int main() {
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
