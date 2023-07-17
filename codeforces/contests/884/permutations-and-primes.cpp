#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

void solve()
{
    int n;
    cin >> n;
    if (n <= 2) {
	for (int i = 1; i <= n; i++) {
	    cout << i << " \n"[i == n];
	}
    } else {
	vector<int> p(n);
	p[0] = 2;
	p[n - 1] = 3;
	p[n / 2] = 1;
	int ins = 4;
	for (auto& x : p) {
	    if (x == 0) {
		x = ins++;
	    }
	}
	for (int i = 0; i < n; i++) {
	    cout << p[i] << " \n"[i == n - 1];
	}
    }
}

signed main()
{

    int t;
    cin >> t;
    while (t--) {
	solve();
    }
}



