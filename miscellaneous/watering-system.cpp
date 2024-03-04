#include <bits/stdc++.h>
using namespace std;
#define int long long

#define MOD 1000000007

signed main()
{
	int n, a, b, ans, sum;
	cin >> n >> a >> b;
	vector<int> s(n);
	for (auto& x : s)
		cin >> x;
	sum = accumulate(s.begin(), s.end(), 0);
	sort(s.begin() + 1, s.end());
	for (ans = 0; ans < n - 1; ans++) {
		if (s[0] * a >= sum * b)
			break;
		sum -= s[n - ans - 1];
	}
	cout << ans << "\n";
}			
