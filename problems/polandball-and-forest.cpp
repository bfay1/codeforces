#include <bits/stdc++.h>

int main()
{
	int n;
	std::cin >> n;
	std::set<int> st;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		int x;
		std::cin >> x;
		if (i == x)
			ans++;
		else
			st.insert(x);
	}
	std::cout << ans + (int) st.size() / 2 << "\n";
}
