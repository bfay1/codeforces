#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, l, t;
        long long p;
        cin >> n >> p >> l >> t;
        int ans = n;

        for (int i = 8; i <= n; i += 14) {
            p -= 2*t + l;
            --ans;
            if (p <= 0) break;
        }

        if (p <= 0) {
            cout << ans << "\n";
            continue;
        }

        for (int i = 1; i <= n; i += 14) {
            p -= t + l;
            --ans;
            if (p <= 0) break;
        }

        if (p <= 0) {
            cout << ans << "\n";
            continue;
        }

        while (p > 0) {
            p -= l;
            ans--;
            if (p <= 0) break;
        }

        cout << ans << "\n";

    }
}
