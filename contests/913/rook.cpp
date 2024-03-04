#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        string rook;
        cin >> rook;
        for (const auto& r : "12345678"s) {
            for (const auto& c : "abcdefgh"s) {
                if ((r == rook[1]) ^ (c == rook[0])) {
                    cout << c << r << "\n";
                }
            }
        }
    }
}
