#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n, div = 0, resp, l, r, m;
	cin >> n;
	l = 1, r = n;
	while (r - l > 1) {
		m = (r - l) / 2 + l;
		cout << "+ " << n - m << endl;
		cin >> resp;
		if (resp > div)
			l = m;
		else
			r = m;
		l = (l + n - m) % n;
		r = (r + n - m) % n;
		if (r == 0)
			r = n;
		div = resp;
	}
	cout << "! " << div * n + l;
}
