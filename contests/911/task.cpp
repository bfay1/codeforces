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
        vector<ll> a(n);
        for (auto& x : a)
            cin >> x;
        sort(a.begin(), a.end());
        ll ans = gcd(a[0], a[1])*(n - 2);

        for (int i = 2; i < n; i++) {
            ll sum = 0;
            for (int j = 0; j < i; j++) {
                sum += gcd(a[i], a[j]);
            }
            ans += (n - 1 - i)*sum;
        }

        cout << ans << "\n";
    }
}
