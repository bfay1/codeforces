#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	int one = INT_MAX;
	int two = INT_MAX;
	int three = INT_MAX;
	while (n--) {
		int x;
		cin >> x;
		string s;
		cin >> s;
		if (s == "01")
			one = min(x, one);
		else if (s == "10")
			two = min(x, two);
		else if (s == "11")
			three = min(x, three);
	}

	if (three == INT_MAX && (one == INT_MAX || two == INT_MAX))
		cout << -1 << "\n";
	else
		cout << min(three, one + two) << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}













