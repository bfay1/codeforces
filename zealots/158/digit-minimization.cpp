#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
	std::string n;
	std::cin >> n;
	if (n.size() == 2) {
	    std::cout << n[1] << "\n";
	} else {
	    std::cout << *min_element(n.begin(), n.end()) << "\n";
	}
    }
}
