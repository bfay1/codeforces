#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, cur = 0, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.')
                cur++;

            if (s[i] == '#' || i == n - 1) {
                if (cur >= 3) {
                    ans = 2;
                    break;
                } else if (cur == 1) {
                    ans++;
                } else if (cur > 1) {
                    ans += 2;
                }
                cur = 0;
            }
        }

        cout << ans << "\n";
    }
}
