#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int x, y, n;
    cin >> x >> y >> n;
    vector<int> a {y};
    int cur = y;
    for (int i = 1; i < n - 1; i++) {
        a.push_back((cur -= i));
    }
    a.push_back(x);
    reverse(a.begin(), a.end());
    int diff = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] >= diff) {
            cout << "-1\n";
            return;
        } else {
            diff = (a[i + 1] - a[i]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " \n"[i == n - 1];
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
