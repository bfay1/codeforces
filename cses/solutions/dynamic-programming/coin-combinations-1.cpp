#include <bits/stdc++.h>

const int mod = 1e9 + 7;

int main()
{
    int n, x;
    std::cin >> n >> x;
    std::vector<int> a(n);
    for (auto& x : a)
	std::cin >> x;
    std::vector<int> dp(x + 1);
    dp[0] = 1;
    for (int i = 0; i <= x; i++) {
	for (auto c : a) {
	    if (c <= i) {
		dp[i] += dp[i - c];
		dp[i] %= mod;
	    }
	}
    }
    std::cout << dp[x] << "\n";
}
