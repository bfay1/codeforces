#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<pair<int, int>> g(n, {-1, -1});
        vector<int> dp(n), leaf;

        for (int i = 0, x, y; i < n; i++) {
            cin >> x >> y;
            if (x == 0 && y == 0)
                leaf.push_back(i);
            if (x != 0)
                g[i].first = --x;
            if (y != 0)
                g[i].second = --y;
        }

        vector<int> q {0}, nq;

        for (; q.size(); swap(q, nq), nq.clear()) {
            for (const auto& x : q) {
                auto [l, r] = g[x];
                if (l != -1)
                    dp[l] = dp[x] + (s[x] != 'L'), nq.push_back(l);
                if (r != -1)
                    dp[r] = dp[x] + (s[x] != 'R'), nq.push_back(r);
            }
        }

        int ans = INT_MAX;

        for (const auto& x : leaf)
            ans = min(ans, dp[x]);

        cout << ans << "\n";
    }
}
