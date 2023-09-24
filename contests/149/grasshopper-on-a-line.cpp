#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int x, k;
    cin >> x >> k;
    if (x % k == 0)
	cout << 2 << "\n" << x - (k + 1) << " " << k + 1 << "\n";
    else
	cout << 1 << "\n" << x << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}










