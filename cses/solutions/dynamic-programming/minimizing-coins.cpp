#include <bits/stdc++.h>


int main()
{
    int n, x;
    std::cin >> n >> x;

    std::vector<long long> a(n);
    std::vector<long long> dp(x + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 0; i < n; i++)
	std::cin >> a[i];

    for (int i = 0; i <= x; i++)
	for (int j = 0; j < n; j++)
	    if (a[j] <= i)
		dp[i] = std::min(dp[i], dp[i - a[j]] + 1);

    if (dp[x] == INT_MAX)
	std::cout << -1 << "\n";
    else
	std::cout << dp[x] << "\n";
}
