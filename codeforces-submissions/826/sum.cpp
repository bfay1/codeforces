#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a + b + c;
	if (sum == 2*c  || sum == 2*a || sum == 2*b) cout << "YES\n";
	else cout << "NO\n";
	return;
}
 
int main() {
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
