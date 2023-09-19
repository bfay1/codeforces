#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((abs(a - b) + c - 1) / c + 1) / 2 << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
