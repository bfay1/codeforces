#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n; cin >> n;
	int i = -1;
	while (i < n) {
		i += 2;
		if (i <= n) {
		    cout << i << " ";
		}
	}
	i--;
	
	while (i > 0) {
		cout << i << " ";
		i -= 2;
	}
	cout << "\n";
}
 
int main() {
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
