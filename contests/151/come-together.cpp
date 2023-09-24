#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
	std::pair<int, int> a;
	std::pair<int, int> b;
	std::pair<int, int> c;
	std::cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second;
	int abx = a.first - b.first;
	int aby = a.second - b.second;
	int acx = a.first - c.first;
	int acy = a.second - c.second;

	int ans = 1;

	auto same = [&] (int x, int y) {
	    return (x <= 0 && y <= 0) || (x >= 0 && y >= 0);
	};

	if (same(abx, acx)) {
	    ans += std::min(abs(abx), abs(acx));
	}

	if (same(aby, acy)) {
	    ans += std::min(abs(aby), abs(acy));
	}

	std::cout << ans << "\n";

    }
}
