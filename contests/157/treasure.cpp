#include <bits/stdc++.h>
using namespace std;

void solve()
{
        int x, y, k;
        cin >> x >> y >> k;

        if (y <= x)
                cout << x << "\n";
        else if (x + k >= y)
                cout << x + k << "\n";
        else
                cout << x + k + 2 * (y - x - k) << "\n";

}

int main()
{
        int t;
        cin >> t;
        while (t--)
                solve();
}
