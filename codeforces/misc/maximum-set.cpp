#include<bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 998254353;

signed main()
{
	function<int(int, int)> bp = [&] (int a, int b) {
		int ret = 1;
		while (b) {
			if (b & 1)
				ret *= a;
			ret %= mod;
			a *= a;
			a %= mod;
			b >>= 1;
		}
		return ret;
	};

	int t;
	cin >> t;
	while (t--) {
		int l, r;
		cin >> l >> r;

		int a = 0;

		while (l*(1 << a) <= r)
			a++;

		int b = (r / (1 << (a - 1)) - l + 1);

		if (a > 1)
			b += (a - 1) * max(0LL, (r / (1 << (a - 2)) / 3 - l + 1));

		cout << a << " " << b << "\n";
	}
}






















