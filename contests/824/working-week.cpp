#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int l1, l2, l3;
		l1 = 1;
		l2 = n / 3 - 1;
		l3 = n - n / 3 + 1;
		int ret = min(abs(l1 - l2), abs(l2 - l3));
		ret = min(abs(l1 - l2), ret);
		cout << ret << "\n";
	}
	return 0;
}
