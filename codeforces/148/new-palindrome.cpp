#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int t;
	cin >> t;
	while (t--) {
		string s, ans = "NO\n";
		cin >> s;
		int n = s.size() / 2;
		for (int i = 1; i < n; i++) {
			if (s[i] != s[i - 1]) {
				ans = "YES\n";
				break;
			}
		}
		cout << ans;
	}
}























