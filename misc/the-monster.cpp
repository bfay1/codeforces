#include <bits/stdc++.h>
using namespace std;
#define int long long

#define no() return cout << "NO\n", 0;
#define yes() return cout << "YES\n", 0;
#define rick(x) (b + x * a)
#define morty(x) (d + x * c)
#define pickle() swap(b, d), swap(a, c)

signed main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int ans = -1, t1 = -1, t2 = -1;

	if (d < b)
		swap(a, c), swap(b, d);

	function <int(int, int, int)> f = [&] (int a, int b, int x) {
		return b + a * x;
	};

	function <void(int)> bs = [&] (int x) {
		int l = 1, r = 10000;
		int rick = f(a, b, x - 1);
		while (l <= r) {
			int m = (r - l) / 2 + l;
			int morty = f(c, d, m - 1);
			if (rick <= morty) {
				if (rick == morty)
					ans = ans == -1 ? rick : min(rick, ans);
				r = m - 1;
			} else
				l = m + 1;
		}		
	};

	for (int i = 0; i < 10000; i++)
		bs(i);

	cout << ans << "\n";
}
