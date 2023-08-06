#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ifstream fin("longpath.in");
    ofstream fout("longpath.out");

    int n, m, ans = 0;
    fin >> n >> m;

    vector<vector<int>> g(n);
    vector<int> state(n), order(n), dp(n);
    int p = n;
 
    for (int i = 0; i < m; i++) {
	int b, e;
	fin >> b >> e;
	g[--b].push_back(--e);
    }

    ([&] (auto f, int u) { f(f, u); })([&] (auto f, int u) -> void {
	if (state[u])
	    return;
	state[u] = 1;
	for (const auto& v : g[u]) {
	    f(f, v);
	}
	state[u] = 2;
	order[--p] = u;
    }, 0LL);

    ([&] (auto f, int u) { f(f, u); })([&] (auto f, int u) -> void {
	    for (const auto& v : g[u]) {
	    	dp[v] = max(dp[v], dp[u] + 1);
		ans = max(dp[v], ans);
		f(f, v);
	    } }, order[0]);

    fout << ans;
}
