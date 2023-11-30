#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), prefix(n + 1);
        for (auto& x : a) cin >> x;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) prefix[i + 1] = prefix[i] + a[i];
        int ans = 0;
        for (int k = 2; k <= n; k++) if (n % k == 0) {
            ans = max(ans, abs(prefix[n] - prefix[(k - 1)*(n / k)] - prefix[n / k]));
        }

        cout << ans << "\n";

    }
}
