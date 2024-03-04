#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, ones = 0, other = 0, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
	int x;
	cin >> x;
	if (x == 1)
	    ones++;
	else
	    other++;
	sum += x - 1;
    }
    if (n == 1 || (other < ones && sum < ones)) {
	cout << "NO\n";
    } else {
	cout << "YES\n";
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
