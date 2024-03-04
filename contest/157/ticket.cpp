#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    map<int, int> even, odd;

    for (int _ = 0; _ < n; _++) {
        string s;
        cin >> s;
        int parity = (int) s.size() % 2;
        int sum = transform_reduce(s.begin(), s.end(), 0, [&] (int x, int y) { return x + y; }, [&] (char c) -> int { return c - '0'; });

        ans += ++(parity ? odd : even)[sum];
    }

    cout << ans << "\n";
}
