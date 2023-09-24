#include<bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;

struct LCA {
    vector<int> height, euler, first, segtree;
    vector<bool> visited;
    int n;

    LCA(vector<vector<int>> &adj, int root = 0) {
        n = adj.size();
        height.resize(n);
        first.resize(n);
        euler.reserve(n * 2);
        visited.assign(n, false);
        dfs(adj, root);
        int m = euler.size();
        segtree.resize(m * 4);
        build(1, 0, m - 1);
    }

    void dfs(vector<vector<int>> &adj, int node, int h = 0) {
        visited[node] = true;
        height[node] = h;
        first[node] = euler.size();
        euler.push_back(node);
        for (auto to : adj[node]) {
            if (!visited[to]) {
                dfs(adj, to, h + 1);
                euler.push_back(node);
            }
        }
    }

    void build(int node, int b, int e) {
        if (b == e) {
            segtree[node] = euler[b];
        } else {
            int mid = (b + e) / 2;
            build(node << 1, b, mid);
            build(node << 1 | 1, mid + 1, e);
            int l = segtree[node << 1], r = segtree[node << 1 | 1];
            segtree[node] = (height[l] < height[r]) ? l : r;
        }
    }

    int query(int node, int b, int e, int L, int R) {
        if (b > R || e < L)
            return -1;
        if (b >= L && e <= R)
            return segtree[node];
        int mid = (b + e) >> 1;

        int left = query(node << 1, b, mid, L, R);
        int right = query(node << 1 | 1, mid + 1, e, L, R);
        if (left == -1) return right;
        if (right == -1) return left;
        return height[left] < height[right] ? left : right;
    }

    int lca(int u, int v) {
        int left = first[u], right = first[v];
        if (left > right)
            swap(left, right);
        return query(1, 0, euler.size() - 1, left, right);
    }
};

signed main()
{
	int n, k;
	cin >> n >> k;
	vector<vector<int>> tree(n);
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		tree[u].push_back(v);
		tree[v].push_back(u);
	}

	vector<int> dist(n);
	vector<int> vis(n);

	function <void(int, int)> dfs = [&] (int u, int cur) {
		if (vis[u])
			return;
		dist[u] = cur;
		vis[u] = 1;
		for (auto v : tree[u])
			dfs(v, cur + 1);
	};

	dfs(0, 0);

	LCA lca = LCA(tree);

	if (k == 1)
		return cout << "1\n", 0;

	int p = 0;
	int q = 0;

	if (k == 2) {
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				int x = dist[i] + dist[j] - 2*dist[lca.lca(i, j)] + 1;
				p += x;
				q++;
			}
		}
	}

	if (k == 3) {
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n; k++) {
					int l = lca.lca(i, j);
					int m = lca.lca(l, k);
					int d = dist[i] + dist[j] - 2*dist[l] + 1;
					p += d + dist[l] + dist[k] - 2*dist[m] + 1;
					q++;
				}
			}
		}
	}

}























