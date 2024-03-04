#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;

    if (a == 1)
        return cout << b * b << "\n", void();
    if (lcm(a, b) != a && lcm(a, b) != b)
        return cout << lcm(a, b) << "\n", void();

    cout << b * b / a << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
