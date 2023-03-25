#include <bits/stdc++.h>

int main()
{
	std::cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	std::cin >> t;
	while (t--) {
		long long n;
		std::cin >> n;
		std::cout << (int) std::ceil(sqrtl(n)) - 1LL << "\n";
	}
}

















