#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

void solve()
{
    int a, b;
    cin >> a >> b;

    if (min(a, b) == 1) {
	cout << a + b << "\n";
    } else {
	cout << 1 << "\n";
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



