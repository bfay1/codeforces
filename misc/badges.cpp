#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int b, g, n;
    cin >> b >> g >> n;
    cout << min({b, g, n}) - max(0LL, n - max(b, g)) + 1 << "\n";
}
