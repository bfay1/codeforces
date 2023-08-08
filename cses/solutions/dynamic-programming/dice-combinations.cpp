#include <bits/stdc++.h>

const long long mod = 1e9 + 7;

long long dp[1000005];

int main()
{
    long long n;
    std::cin >> n;

    for (long long i = 1; i <= 6; i++) {
	dp[i] = (1 << (i - 1));
    }

    for (long long i = 7; i <= n; i++) {
	for (long long j = 1; j <= 6; j++) {
	    dp[i] += dp[i - j];
	    dp[i] %= mod;
	}
    }

    std::cout << dp[n] << "\n";
}
