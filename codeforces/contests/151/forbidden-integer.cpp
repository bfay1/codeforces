#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
	int n, k, x;
	std::cin >> n >> k >> x;
	if ((k == 2 && x == 1 && n % 2 != 0) || (x == 1 && k == 1)) {
	    std::cout << "NO\n";
	} else if (x != 1) {
	    std::cout << "YES\n";
	    std::cout << n << "\n";
	    while (n--) {
		std::cout << 1 << " \n"[n == 0];
	    }
	} else {
	    std::cout << "YES\n";
	    std::cout << n / 2 << "\n";
	    if (n % 2 == 0) {
		for (int i = 0; i < n; i += 2) {
		    std::cout << 2 << " \n"[i == n - 2];
		}
	    } else {
		n -= 3;
		std::cout << 3 << " \n"[n == 0];
		for (int i = 0; i < n; i += 2) {
		    std::cout << 2 << " \n"[i == n - 2];
		}
	    }
	}
    }
}
