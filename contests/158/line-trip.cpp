#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (auto& x : a) cin >> x;
        int mx = max(a[0], 2*(x - a.back()));
        for (int i = 0; i < n - 1; i++) {
            mx = max(mx, a[i + 1] - a[i]);
        }
        cout << mx << "\n";
    }
}
