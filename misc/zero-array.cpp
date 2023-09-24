#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n;
	cin >> n;
	int x, mx = INT_MIN, sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		sum += x;
		mx = max(x, mx);
	}
	if (sum % 2 == 0 && sum >= 2 * mx)
		cout << "YES\n";
	else
		cout << "NO\n";
}
