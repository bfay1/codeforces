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
		vector<int> a(n), b, c;
		for (auto& x : a)
			cin >> x;
		
		if (set(a.begin(), a.end()).size() == 1) {
			cout << "-1\n";
			return;
		}

		int mn = *min_element(a.begin(), a.end());

		for (const auto& x : a) {
			if (x == mn)
				b.push_back(x);
			else
				c.push_back(x);
		}

		cout << b.size() << " " << c.size() << "\n";
		for (int i = 0; i < b.size(); i++)
			cout << b[i] << " \n"[i == b.size() - 1];
		for (int i = 0; i < c.size(); i++)
			cout << c[i] << " \n"[i == c.size() - 1];
			solve();
	}
}
