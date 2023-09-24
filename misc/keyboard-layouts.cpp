#include <bits/stdc++.h>

int main()
{
	std::string a, b, s;
	std::cin >> a >> b >> s;

	std::unordered_map<char, char> mp;

	for (int i = 0; i < 26; i++) {
		mp[a[i]] = b[i];
		mp[a[i] - 32] = b[i] - 32;
	}

	for (auto c : s) {
		if (std::tolower(c) >= 'a' && std::tolower(c) <= 'z')
			std::cout << mp[c];
		else
			std::cout << c;
	}

	std::cout << "\n";
}
