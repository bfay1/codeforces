#include <bits/stdc++.h>
 
int main()
{
	long long n, q;
	std::cin >> n >> q;
	std::vector<long long> x(n);
	std::vector<long long> prefix(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		std::cin >> x[i - 1];
		prefix[i] = prefix[i - 1] + x[i - 1];
	}
	for (int i = 0; i < q; i++) {
		long long a, b;
		std::cin >> a >> b;
		std::cout << prefix[b] - prefix[a - 1] << "\n";
	}		
	return 0;
}
