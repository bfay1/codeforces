#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;

    while (t--) {

	int n;
	std::cin >> n;
	std::vector<long long> a(n);

	for (auto& x : a)
	    std::cin >> x;

	int ops = 0;
	long long ans = 0;
	bool neg = false, first = false;

	for (int i = 0; i < n; i++) {

	    if (a[i] == 0)
		continue;

	    if (a[i] < 0 && !neg) {
		ops++;
	    }

	    neg = a[i] < 0;
	    ans += std::abs(a[i]);
	}

	std::cout << ans << " " << ops << "\n";
    }
}
