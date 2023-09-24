#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (auto& x : a)
			cin >> x;
		int even = 0, odd = 0, one = 0, sum = 0;
		
		for (int i = 1; i < n - 1; i++) {
			if (a[i] % 2)
				odd++;
			else
				even++;
			if (a[i] > 1)
				one++;
			sum += a[i];
		}

		if ((n == 3 && even == 0) || one == 0)
			cout << "-1\n";
		else
			cout << sum / 2 + (odd + 1) / 2 << "\n";
	}
}
