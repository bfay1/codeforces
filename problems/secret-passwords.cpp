#include <bits/stdc++.h>
using namespace std;

#define watch(x) cerr << (#x) << ": " << x << "\n"

typedef long long ll;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> g(n + 26);
    vector<int> vis(n + 26);

    auto edge = [&] (int u, int v) {
        g[u].push_back(v);
        g[v].push_back(u);
    };

    for (int i = 0; i < n; i++) {
        string pswd;
        cin >> pswd;
        for (const auto& x : pswd) {
            edge(i, x + n - 'a');
        }
    }

    auto dfs = [&] (auto self, int u) -> void {
        vis[u] = true;
        for (const auto& v : g[u]) if (!vis[v]) {
            self(self, v);
        }
    };

    int ans = 0;

    for (int i = 0; i < n + 26; i++) {
        if (!vis[i] && g[i].size()) {
            dfs(dfs, i);
            ans++;
        }
    }

    cout << ans << "\n";
}
