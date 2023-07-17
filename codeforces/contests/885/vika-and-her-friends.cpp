#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

signed main()
{
    int t;
    cin >> t;

    auto dist = [] (const int& a, const int& b, const int& c, const int& d) {
	return abs(a - c) + abs(b - d);
    };

    while (t--) {
	int n, m, k;
	cin >> n >> m >> k;
	int x, y;
	cin >> x >> y;
	bool ans = true;
	for (int i = 0; i < k; i++) {
	    int a, b;
	    cin >> a >> b;
	    if (dist(x, y, a, b) % 2 == 0) {
		ans = false;
	    }
	}
	cout << (ans ? "YES\n" : "NO\n");
    }
}



