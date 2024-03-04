#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (k % 2 ==0) {
        sort(s.begin(), s.end());
    } else {
        for (int i = n - 1; i >= 2; i--)
            if (s[i] < s[i - 2])
                swap(s[i], s[i - 2]);

        for (int i = 0; i < n - 2; i++)
            if (s[i + 2] < s[i])
                swap(s[i], s[i + 2]);
    }

    cout << s << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
