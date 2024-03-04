#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    cout << min(a / (x / gcd(x, y)), b / (y / gcd(x, y))) << "\n";
}
