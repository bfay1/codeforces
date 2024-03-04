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

        vector<int> a(n);

        for (auto& x : a)
            cin >> x;

        ll ans = 0;

        for (int i = n - 1; i > 0; i--) {
            int k = (a[i - 1] + a[i] - 1) / a[i];
            ans += k - 1;
            a[i - 1] /= k;
        }

        cout << ans << "\n";
    }

}
