#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;

    while (t--) {

	int n;
	std::cin >> n;
	std::vector<int> a(n);

	for (auto& x : a)
	    std::cin >> x;

	std::sort(a.begin(), a.end());
	int l = -1, r = INT_MAX;

	while (l + 1 < r) {

	    int m = std::midpoint(l, r);
	    int i = 0;
	    int j = n - 1;

	    while (i < n - 1 && a[i + 1] - a[0] <= 2*m)
		i++;

	    while (j - 1 > 0 && a[n - 1] - a[j - 1] <= 2*m)
		j--;

	    if (j - 1 < i + 1 || a[j - 1] - a[i + 1] <= 2*m)
		r = m;
	    else
		l = m;

	}

	std::cout << r << "\n";
    }
}
