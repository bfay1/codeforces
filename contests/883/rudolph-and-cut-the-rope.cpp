#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
	int n, ans = 0;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
	    int a, b;
	    std::cin >> a >> b;
	    if (b < a) {
		++ans;
	    }
	}
	std::cout << ans << "\n";
    }
}
