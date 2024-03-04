#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;

void solve()
{
    long long a, b;
    cin >> a >> b;
    cout << ((a + b) % 2LL == 0 ? "Bob\n" : "Alice\n");
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
