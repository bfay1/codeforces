#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cout << 2*(x - y) << "\n";
        for (int i = y; i <= x; i++)
            cout << i << " \n"[i == x];
        for (int i = x - 1; i >= y + 1; i--)
            cout << i << " \n"[i == y + 1];
    }
}
