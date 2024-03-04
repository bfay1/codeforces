#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        bool srtd = true;
        int prev = 0;
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            if (x < prev)
                srtd = false;
            prev = x;
        }
        cout << (k >= 2 || srtd ? "YES\n" : "NO\n");
    }
}
