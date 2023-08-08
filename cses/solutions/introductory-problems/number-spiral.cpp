#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long x, y, z, z2, ans;
		cin >> y >> x;
		z = max(x, y);
		z2 = (z - 1)*(z - 1);
		if (z & 1) {
			ans = (y == z) ? z2 + x : z*z - y + 1;
		} else {
			ans = (y == z) ? z*z - x + 1 : z2 + y;
		}
		cout << ans << "\n";
	}
}
