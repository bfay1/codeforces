#include <bits/stdc++.h>

int main()
{
	std::cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	std::cin >> t;
	while (t--) {
		int m;
		std::cin >> m;
		std::vector<std::vector<int>> a(m);
		std::vector<std::vector<int>> ans(m);
		std::unordered_set<int> st;
		std::unordered_set<int> seen;
		bool gloflag = false;
		for (int i = 0; i < m; i++) {
			int n;
			std::cin >> n;
			while (n--) {
				int x;
				std::cin >> x;
				a[i].push_back(x);
			}
		}
		for (int i = m - 1; i >= 0; i--) {
			bool flag = true;
			for (auto x : a[i]) {
				if (st.find(x) == st.end()) {
					ans[i].push_back(x);
					flag = false;
				}
				st.insert(x);
			}
			if (flag) {
				std::cout << -1 << "\n";
				i = -1;
				gloflag = true;
			}
		}
		if (gloflag)
			continue;
		for (int i = 0; i < m; i++) {
			for (auto x : ans[i]) {
				if (seen.find(x) == seen.end()) {
					std::cout << x << " \n"[i == m - 1];
					seen.insert(x);
					break;
				}
			}
		}
	}
}

