#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c % 2)
        b--;
    cout << (a <= b ? "Second\n" : "First\n");
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
