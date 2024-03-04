#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;

    while (t--) {
	int n, ans = 1, mx = 0;

	std::cin >> n;

	std::map<int, int> p, q;
	std::vector<int> a(n), b(n);

	auto f = [&] (std::vector<int>& arr, std::map<int, int>& mp) {

	    int cur = 1;

	    for (int i = 1; i < arr.size(); ++i) {
		if (arr[i] == arr[i - 1]) {
		    ++cur;
		} else {
		    mp[arr[i - 1]] = std::max(mp[arr[i - 1]], cur);
		    mx = std::max(mx, cur);
		    cur = 1;
		}
	    }

	    mx = std::max(mx, cur);
	    mp[arr.back()] = std::max(mp[arr.back()], cur);

	};

	for (auto& x : a) {
	    std::cin >> x;
	}

	for (auto& x : b) {
	    std::cin >> x;
	}

	f(a, p);
	f(b, q);

	for (auto& [k, v] : p) {
	    if (q.find(k) != q.end()) {
		ans = std::max(ans, v + q[k]);
	    }
	}

	std::cout << std::max(ans, mx) << "\n";
    }
}
