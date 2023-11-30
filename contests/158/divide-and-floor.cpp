#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, mn = INT_MAX, mx = INT_MIN;
        cin >> n;

        for (int i = 0, x; i < n; i++) {
            cin >> x;
            mn = min(mn, x);
            mx = max(mx, x);
        }

        if (mx == mn) {
            cout << "0\n";
            continue;
        }

        vector<int> ans;

        while (mn != mx) {
            int inc = -1;
            if (mn % 2 == 0 && mx % 2 == 0) {
                inc = 0;
            } else if (mn % 2 == 1 && mx % 2 == 0) {
                inc = 1;
            } else if (mn % 2 == 0 && mx % 2 == 1) {
                inc = 0;
            } else if (mn % 2 == 1 && mx % 2 == 1) {
                inc = 0;
            }
            ans.push_back(inc);
            mx += inc, mn += inc;
            mx /= 2, mn /= 2;
        }

        int m = ans.size();

        cout << m << "\n";
        if (0 < m && m <= n) {
            for (int i = 0; i < m; i++)
                cout << ans[i] << " \n"[i == m - 1];
        }
    }
}
