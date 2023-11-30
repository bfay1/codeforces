#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;

    auto f = [&] (int x, int y, int z) {
        return abs(y - z) % 2 == 0;
    };

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << f(a, b, c) << " " << f(b, a, c) << " " << f(c, a, b) << "\n";
    }
}
