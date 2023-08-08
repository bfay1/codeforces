#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    std::map<int, int> mp;
    std::vector<int> a(n);
    int ans = 0;
    int l = 0;

    for (auto& x : a)
	std::cin >> x;

    for (int i = 0; i < n; i++) {

	int x = a[i];
	mp[x]++;

	while (mp[x] > 1) {
	    mp[a[l]]--;
	    l++;
	}

	ans = std::max(ans, i - l + 1);
    }

    std::cout << ans << "\n";
}
