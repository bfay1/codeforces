#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> field(n);
    for (auto& x : field) {
        cin >> x;
    }

    auto valid = [&] (int i, int j) {
        return min(i, j) >= 0 && i < n && j < m;
    };

    vector<pair<int, int>> directions {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) if (field[i][j] != '*') {
            if (field[i][j] == '.') {
                for (const auto& [di, dj] : directions) {
                    if (valid(i + di, j + dj) && field[i + di][j + dj] == '*') {
                        return cout << "NO\n", 0;
                    }
                }
            } else {
                int k = field[i][j] - '0';
                for (const auto& [di, dj] : directions) {
                    if (valid(i + di, j + dj) && field[i + di][j + dj] == '*') {
                        k--;
                    }
                }
                if (k)
                    return cout << "NO\n", 0;
            }
        }
    }

    cout << "YES\n";
}
