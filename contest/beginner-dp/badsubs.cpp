#include <bits/stdc++.h>
using namespace std;

int substrings[3][25];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;

    if (n == 0) return cout << 1, 0;

    substrings[0][1] = substrings[1][1] = substrings[2][1] = 1;

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (j == 1 && k == 0) continue;
                substrings[j][i] += substrings[k][i - 1];
            }
        }
    }

    cout << substrings[0][n] + substrings[1][n] + substrings[2][n];

}
