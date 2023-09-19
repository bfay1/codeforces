#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int x;
    cin >> x;
    vector<int> a {x};

    auto pow2 = [&] (int n) {
        while (n > 1) {
            n >>= 1;
            a.push_back(n);
        }
    };

    for (int i = 0; i <= 30 && x > 1; i++) {
        if (__builtin_popcount(x) == 1) {
            pow2(x);
            break;
        } else if (x & (1 << i)) {
            x -= (1 << i);
            a.push_back(x);
        }
    }
    cout << a.size() << "\n";
    for (int i = 0; i < a.size(); i++)
        cout << max(1LL, a[i]) << " \n"[i == a.size() - 1];
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
