#include <bits/stdc++.h>
using namespace std;

#define watch(x) cerr << (#x) << ": " << x << "\n"

typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n);
    vector<int> vis(n);
    set<int> heap {0};

    auto print = [&] (auto& x) -> void {
        int n = size(x);
        for (int i = 0; i < n; i++)
            cout << x[i] << " \n"[i == n - 1];
    };

    auto edge = [&] (int u, int v) {
        g[--u].push_back(--v);
        g[v].push_back(u);
    };

    for (int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        edge(u, v);
    }

    int total = 0;

    for (; size(heap); ) {
        auto x = *begin(heap); heap.erase(x);
        if (!vis[x])
            cout << x + 1 << " \n"[++total == n];
        vis[x] = true;
        for (const auto& y : g[x]) if (!vis[y]) {
            heap.insert(y);
        }
    }

}
