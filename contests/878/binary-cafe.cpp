#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int hsb = 0;
    int tmp = n;
    int ans = n + 1;
    while (tmp >>= 1)
	hsb++;

    if (hsb + 1 < k) {
	ans = n + 1;
    } else if ((int) (1 << k) - 1 > n) {
	ans = n + 1;
    } else {
	ans = (1 << k);
    }
    cout << ans << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}
