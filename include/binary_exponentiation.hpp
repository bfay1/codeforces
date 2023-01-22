#pragma once

long long binpow(long long a, long long b) {
	long long ans = 1;
	while (b > 0) {
		if (b & 1)
			ans *= a;
		a *= a;
		b >>= 1;
	}
	return ans;
}
