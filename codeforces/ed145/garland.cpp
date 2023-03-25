#include <bits/stdc++.h>

int main()
{
	std::cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		std::vector<int> freq(10);
		for (auto c : s) {
			freq[c - '0']++;
		}
		std::vector<int> f;
		for (auto fr : freq)
			if (fr)
				f.push_back(fr);
		std::sort(f.begin(), f.end());
		if (f[0] == 4)
			std::cout << -1 << "\n";
		else if (f[0] == 1 && f[1] == 3)
			std::cout << 6 << "\n";
		else if (f[0] == 2 && f[1] == 2)
			std::cout << 4 << "\n";
		else if (f[0] == 1 && f[1] == 1 && f[2] == 2)
			std::cout << 4 << "\n";
		else if (f[0] == 1 && f[1] == 1 && f[2] == 1 && f[3] == 1)
			std::cout << 4 << "\n";
	}
}

















