#include <bits/stdc++.h>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (auto& x : a)
		std::cin >> x;
	std::vector<int> cur;
	int ans = 0;	
	for (auto x : a) {
		if (cur.size() != 0 && x != cur.back() + 1)
			cur.clear();
		cur.push_back(x);
		int y = cur.size() - 2;
		if (cur[0] == 1 || cur.back() == 1000)
			y++;
		ans = std::max(ans, y);
	}
	std::cout << ans << "\n";
}
