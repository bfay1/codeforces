#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int b, c, h;
    cin >> b >> c >> h;
    cout << 1 + 2*min(b - 1, c + h) << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--) {
	solve();
    }
}
