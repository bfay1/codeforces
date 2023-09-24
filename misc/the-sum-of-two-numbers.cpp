#include <bits/stdc++.h>
using namespace std;
#define int long long

int sd(int x)
{
	int ret = 0;
	while (x) {
		ret += x % 10;
		x /= 10;
	}
	return ret;
}

void solve()
{
	int n;
	cin >> n;
	if (n == 1) {
		cout << "0 1\n";
		return;
	}
	int l = 0, r = n;
	while (l <= r) {
		int m = (r - l) / 2 + l;
		int x = m;
		int y = n - x;
		int diff = abs(sd(x) - sd(y));
		if (diff <= 1) {
	 		cout << x << " " << y << "\n";
			return;
		} else if (sd(x) > sd(y)) {
			r = m - 1;
		} else {
			l = m + 1;	
		}
	}
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}			
