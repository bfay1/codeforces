#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	if (n == k) {
		cout << s << "\n";
	} else {
		vector<pair<int, char>> a;
		int c = 0;
		for (int i = 0; i < n; i++) {
			if (c >= k / 2)
				break;
			if (s[i] == '(') {
				c++;
				a.push_back({i, '('});
			}
		}
		c = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (c >= k / 2)
				break;
			if (s[i] == ')') {
				c++;
				a.push_back({i, ')'});
			}
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < k; i++)
			cout << a[i].second;
		cout << "\n";
	}
}
