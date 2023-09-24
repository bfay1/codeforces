#include <bits/stdc++.h>

int main()
{
	std::cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	int maxn = 200001;
	std::vector<int> is_prime(maxn, 1);
	std::vector<int> primes;
	std::vector<int> v;

	is_prime[0] = is_prime[1] = 0;

	for (int i = 2; i <= maxn; i++)
		if (is_prime[i] && (long long) i * i < maxn)
			for (int j = i * i; j <= maxn; j += i)
				is_prime[j] = 0;

	for (int i = 2; i <= maxn; i++)
		if (is_prime[i])
			primes.push_back(i);

	std::function<void(int)> fact = [&] (int x) {
		v.clear();
		for (auto p : primes)
			if (x % p == 0)
				v.push_back(p), x /= p;
	};

	std::cin >> t;

	while (t--) {
		std::string ans = "NO\n";
		int n;
		std::cin >> n;
		std::vector<int> a(n);
		for (auto& x : a)
			std::cin >> x;
		maxn = std::sqrt(*std::max_element(a.begin(), a.end()));
		std::vector<int> vis(maxn, 0);
		for (auto x : a) {
			fact(x);
			for (auto p : v) {
				if (vis[p])
					ans = "YES\n";
				vis[p] = 1;
			}
		}
		std::cout << ans;
	}
}
