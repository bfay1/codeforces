#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
	int n;
	std::cin >> n;
	if (n <= 4)
	    std::cout << "Bob\n";
	else
	    std::cout << "Alice\n";
    }
}
