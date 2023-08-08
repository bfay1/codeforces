#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
	int x;
	cin >> x;
	sum += x;
    }
    if (sum % 2 == 0) {
	cout << "YES\n";
    } else {
	cout << "NO\n";
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
