#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long odd = 0, sum = 0;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        sum += x;
        odd += (x % 2 == 1);
        if (i == 0)
            cout << sum << " \n"[n == 1];
        else if (i == 1)
            cout << (sum / 2) * 2 << " \n"[i == n - 1];
        else {
            int olya = odd / 3;
            int masha = (odd - olya) % 2;
            cout << sum - olya - masha << " \n"[i == n - 1];
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
