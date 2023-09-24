#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

const int mod = 1e9 + 7;
const int maxn = LLONG_MAX;
const int minn = LLONG_MIN;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b >= 10 || b + c >= 10 || a + c >= 10) {
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
