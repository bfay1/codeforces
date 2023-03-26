#include <bits/stdc++.h>

int main()
{
	std::cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::vector<int> a(n);
		std::vector<int> b(n);
		for (auto& x : a)
			std::cin >> x;
		for (auto& x : b)
			std::cin >> x;
		if (*std::max_element(a.begin(), a.end()) == a.back() &&
			*std::max_element(b.begin(), b.end()) == b.back()) {
			std::cout << "YES\n";
		} else {
			for (int i = 0; i < n; i++) {
				bool aswap = a[i] > a.back() && b[i] <= a.back();
				bool bswap = b[i] > b.back() && a[i] <= b.back();
				if (aswap || bswap)
					std::swap(a[i], b[i]);
			}
			if (*std::max_element(a.begin(), a.end()) == a.back() &&
				*std::max_element(b.begin(), b.end()) == b.back()) {
				std::cout << "YES\n";
			} else {
				std::cout << "NO\n";
			}
		}
	}
}
