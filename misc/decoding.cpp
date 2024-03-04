#include <bits/stdc++.h>

int main()
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	if (n <= 2) {
		std::cout << s << "\n";
		return 0;
	}
	std::deque<char> dq;
	if (n & 1) {
		for (int i = 0; i < n; i++) {
			if (i & 1)
				dq.push_front(s[i]);
			else
				dq.push_back(s[i]);
		}
	} else {
		for (int i = 0; i < n; i++) {
			if (i & 1)
				dq.push_back(s[i]);
			else
				dq.push_front(s[i]);
		}
	}
	for (int i = 0; i < n; i++)
		std::cout << dq[i];
	std::cout << "\n";
}
