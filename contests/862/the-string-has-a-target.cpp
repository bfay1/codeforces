#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
		
	string t = s;
	string ans = "";

	sort(t.begin(), t.end());

	if (s == t) {
		cout << s << "\n";
		return;
	}

	int first_diff = n;
	char chr;

	for (int i = 0; i < n; i++) {
		if (s[i] != t[i]) {
			first_diff = i;
			chr = t[i];
			break;
		}
	}
	
	if (first_diff == n) {
		cout << s << "\n";
		return;
	}

	bool flag = true;
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == chr && flag) {
			flag = false;
			continue;
		} else {
			ans.push_back(s[i]);
		}
	}

	ans.push_back(chr);
	reverse(ans.begin(), ans.end());
	
	if (ans > s)
		ans = s;

	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
