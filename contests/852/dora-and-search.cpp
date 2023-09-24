#include <bits/stdc++.h>

int main()
{

    int t, n;
    std::cin >> t;

    while (t--) {
        std::cin >> n;
        std::vector<int> a(n);
        for (auto& x : a)
            std::cin >> x;
        int mx = n, mn = 1, end = 1, l = 0, r = n - 1;
        while (l < r && end) {
            if (a[l] == mx)
                l++, mx--;
            else if (a[l] == mn)
                l++, mn++;
            else if (a[r] == mx)
                r--, mx--;
            else if (a[r] == mn)
                r--, mn++;
            else
                std::cout << l + 1 << " " << r + 1 << "\n", end = 0;
        }

        if (end)
            std::cout << "-1\n";
    }

    return 0;
}
