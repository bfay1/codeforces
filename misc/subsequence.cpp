#include <string>
#include <iostream>
#include <algorithm>

int main()
{
        std::string s, ans = "";
        std::cin >> s;

        int start = 0, n = s.size();

        for (char c = 'z'; c >= 'a'; c--) {
                for (int i = start; i < n; i++) {
                        if (s[i] == c)
                                start = i, ans.push_back(s[i]);
                }
        }

        std::cout << ans << "\n";
}
