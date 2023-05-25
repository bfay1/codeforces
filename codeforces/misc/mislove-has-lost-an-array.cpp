#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n, l, r;
    cin >> n >> l >> r;
    int x = (1 << l) - 1 + (n - l);
    int y = (1 << r) - 1 + (1 << (r - 1))*(n - r);
    cout << x << " " << y << "\n";
}










