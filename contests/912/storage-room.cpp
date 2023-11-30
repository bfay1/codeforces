#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mask = 0;
        bool flag = true;
        vector<int> ans(n);
        vector<vector<int>> a(n, vector<int>(n));
        for (auto& v : a) for (auto& x : v) cin >> x;

        for (int i = 0; i < n; i++) {
            int row = (1 << 30) - 1;
            for (int j = 0, x; j < n; j++) {
                if (i == j) continue;
                row &= a[i][j];
            }
            ans[i] = row;
        }

        string ret = "YES\n";

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) if (i != j) {
                if ((ans[i] | ans[j]) != a[i][j]) {
                    ret = "NO\n";
                }
            }
        }

        if (ret == "NO\n") {
            cout << ret;
            continue;
        }

        cout << ret;
        for (int i = 0; i < n; i++)
            cout << ans[i] << " \n"[i == n - 1];

    }
}
