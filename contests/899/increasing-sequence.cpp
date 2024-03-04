#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, ans = 0;
		cin >> n;
		for (int i = 0, x; i < n; i++) {
			cin >> x;
			ans++;
			if (x == ans)
				ans++;
		}

		cout << ans << "\n";
	}
}
