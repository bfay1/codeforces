#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;

    while (t--) {
	long long n, ans = 0;
	std::cin >> n;

	while (n > 0) {
	    ans += n;
	    n /= 2;
	}

	std::cout << ans << "\n";
    }

}
