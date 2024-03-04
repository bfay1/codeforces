#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << (n + 2) / 2 << "\n";

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            cout << (i + 1) / 2 << " " << (i + 1) / 2 << "\n";
        } else {
            cout << i / 2 << " " << i / 2 + 1 << "\n";
        }
    }
}
