#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;

void solve()
{
    int n; cin >> n;
    string s;
    cin >> s;

    int ans = 0, sum = 0;

    for (const auto& x : s) {
        sum += (x == '-' ? -1 : 1);
        ans = abs(sum);
    }

    cout << ans << "\n";
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
