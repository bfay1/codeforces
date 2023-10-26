#include <bits/stdc++.h>
using namespace std;

void solve()
{
        int n, k, diff = INT_MAX, even = 0, four = false;
        cin >> n >> k;
        vector<int> a(n);
        for (auto& x : a) {
                cin >> x;
                if (x % k == 0) {
                        diff = 0;
                } else {
                diff = min(diff, k - x % k);
                }
                if (x % 2 == 0)
                        even++;
                if (x % 4 == 0)
                        four = true;
        }

        if (k == 2 || k == 3 || k == 5) {
                cout << diff << "\n";
        } else {
                if (even >= 2) {
                        cout << "0\n";
                } else {
                        cout << min(diff, 2 - even) << "\n";
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
