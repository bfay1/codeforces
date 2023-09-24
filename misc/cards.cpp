#include <bits/stdc++.h>

int main()
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	int ones = std::count(s.begin(), s.end(), 'n');
	int zeroes = std::count(s.begin(), s.end(), 'z');
	while (ones--)
		std::cout << "1" << " ";
	while (zeroes--)
		std::cout << "0" << " ";
	std::cout << "\n";
}
