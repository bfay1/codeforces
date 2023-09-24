#include <bits/stdc++.h>

int main()
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	int sf = 0;
	int fs = 0;
	for (int i = 0; i < n - 1; i++) {
		if (s[i] == 'S' && s[i + 1] == 'F')
			sf++;
		else if (s[i] == 'F' && s[i + 1] == 'S')
			fs++;
	}
	std::cout << (sf > fs ? "YES\n" : "NO\n");
}
