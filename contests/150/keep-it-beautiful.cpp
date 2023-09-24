#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;

    while (t--) {
	int q;
	int inv = 0;

	std::vector<int> a;
	std::cin >> q;

	while (q--) {
	    int x;
	    std::cin >> x;

	    if (a.size() == 0) {
		a.push_back(x);
		std::cout << 1;
	    	continue;
	    }

	    if (a.back() <= x && inv == 0) {
		a.push_back(x);
		std::cout << 1;
	    	continue;
	    } else if (x < a.back() && inv == 0) {
		if (x <= a[0]) {
		    a.push_back(x);
		    std::cout << 1;
		    inv++;
		    continue;
		} else {
		    std::cout << 0;
		}
	    } else {
		if (a.back() <= x && x <= a[0]) {
		    a.push_back(x);
		    std::cout << 1;
		    continue;
		} else {
		    std::cout << 0;
		}
	    }
	}

	std::cout << "\n";
    }
}
