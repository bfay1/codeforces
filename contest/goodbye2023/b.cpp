#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;

    if (a == 1)
        return cout << b*b << "\n", void();

    for (int i = 2*b; i <= b * max(a, 2LL); i += b) {
        if (i % a == 0 && (i / a == b || i / a <= a)) {
            return cout << i << "\n", void();
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
