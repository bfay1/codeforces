#include <bits/stdc++.h>

int main()
{
	std::cin.tie(nullptr)->sync_with_stdio(false);
	int t; std::cin >> t;
	while (t-- ) {
		int n, ans;
		std::cin >> n; 
		std::vector<int> a(n);
		for (auto& x : a)
			std::cin >> x;
		std::vector<int> prefix{0};
		for (auto x : a)
			prefix.push_back(prefix.back() + x);
		
		int l = 0, r = n;

		while (l < r) {
			int mid = (r - l) / 2 + l;

			if (r - l == 1) {
				std::cout << "! " << mid + 1 << std::endl;
				break;
			}

			std::cout << "? " << mid - l;
			
			for (int i = l; i < mid; i++)
				std::cout << ' ' << i + 1;
			
			std::cout << std::endl;
			std::cin >> ans;

			if (ans > prefix[mid] - prefix[l])
				r = mid;
			else
				l = mid;
		}
	}
}
