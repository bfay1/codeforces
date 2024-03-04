#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, prod = 1;
    cin >> n >> k;
    vector<int> b(n);

    for (int i = 0, x; i < n; i++) {
        cin >> x;
        prod *= x;
    }

    if (2023 % prod)
        return cout << "NO\n", void();

    cout << "YES\n" << 2023 / prod << " \n"[k == 1];

    while (--k)
        cout << 1 << " \n"[k == 1];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
