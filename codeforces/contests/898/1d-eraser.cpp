#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, k, ans = 0;
	cin >> n >> k;
	string s;
	cin >> s;

	for (int i = 0; i < n; ) {
		if (s[i] == 'B') {
			for (int j = 0; j < k && i < n; j++, i++)
				s[i] = 'W';
			ans++;
		} else {
			i++;
		}
	}

	cout << ans << "\n";

}

signed main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        solve();
}
