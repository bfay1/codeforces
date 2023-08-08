#include <bits/stdc++.h>

struct dsu {
	std::vector<int> e;
	
	void init(int n)
	{
		e = std::vector<int>(n, -1);
	}
	
	int get(int x)
	{
		return e[x] < 0 ? x : (e[x] = get(e[x]));
	}

	bool same(int x, int y)
	{
		return get(x) == get(y);
	}

	int size(int x)
	{
		return -e[get(x)];
	}

	bool unite(int x, int y)
	{
		x = get(x), y = get(y);
		if (x == y)
			return 0;
		if (e[x] > e[y])
			std::swap(x, y);
		e[x] += e[y];
		e[y] = x;
		return 1;
	}
};

int main()
{
	std::cin.tie(nullptr)->sync_with_stdio(false);
	int n, m;
	std::cin >> n >> m;
	dsu dsu;
	dsu.init(n);
	int cc = n, large = -1;

	for (int i = 0; i < m; i++) {
		int x, y;
		std::cin >> x >> y;
		x--;
		y--;
		if (dsu.unite(x, y)) {
			large = std::max(large, dsu.size(x));
			cc--;
		}
		std::cout << cc << " " << large << "\n";
	}
}
















