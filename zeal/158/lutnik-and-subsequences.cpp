#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;
    
    while (t--) {

	int n, o = 0, z = 0;
	std::cin >> n;

	while (n--) {
	    int x;
	    std::cin >> x;

	    if (x == 1) {
		o++;
	    } else if (x == 0) {
		z++;
	    }
	}

	std::cout << (1LL << z) * o << "\n";
    }
}
