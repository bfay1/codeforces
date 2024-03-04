#include <bits/stdc++.h>
using namespace std;

void solve()
{
        int n, m, ans = 0;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        while (x.find(s) == string::npos)
                x += x, ans++;

        cout << ans << "\n";
}

int main()
{
        int t;
        cin >> t;
        while (t--)
                solve();
}
