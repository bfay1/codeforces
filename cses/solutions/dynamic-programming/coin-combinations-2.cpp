#include <bits/stdc++.h>

const int mod = 1e9 + 7;

int main()
{
    int n, x;
    std::cin >> n >> x;
    std::vector<int> a(n);
    for (auto& x : a)
	std::cin >> x;
    std::sort(a.begin(), a.end());
    std::vector<int> dp(x + 1);
    dp[0] = 1;
    for (auto c : a) {
	for (int i = 0; i <= x; i++) {
	    if (c <= i) {
		dp[i] += dp[i - c];
		dp[i] %= mod;
	    }
	}
    }
    std::cout << dp[x] << "\n";
}
