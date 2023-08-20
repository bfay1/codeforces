#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> vis(n + 1), bridges;
    vector<vector<int>> g(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

     auto dfs = [&] (auto f, int u) -> void {
        vis[u] = true;
        for (const auto& v : g[u])
            if (!vis[v])
                f(f, v);
    };

     for (int i = 1; i <= n; i++) {
         if (!vis[i])
             bridges.push_back(i);
         dfs(dfs, i);
     }

     cout << bridges.size() - 1 << "\n";
     for (int i = 0; i < bridges.size() - 1; i++)
         cout << bridges[i] << " " << bridges[i + 1] << "\n";
}
