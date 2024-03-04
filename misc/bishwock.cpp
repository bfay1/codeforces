#include <bits/stdc++.h>
using namespace std;

#define watch(x) cerr << (#x) << ": " << x << "\n"

typedef long long ll;

int main()
{
    vector<string> board(2);
    cin >> board[0] >> board[1];

    auto f = [&] (int i) {
        if (board[0][i] == '0' && board[0][i + 1] == '0' && board[1][i] == '0') {
            board[0][i] = board[0][i + 1] = board[1][i] = 'X', 1;
            return 1;
        }
        if (board[0][i] == '0' && board[0][i + 1] == '0' && board[1][i + 1] == '0') {
            board[0][i] = board[0][i + 1] = board[1][i + 1] = 'X';
            return 1;
        }
        if (board[1][i] == '0' && board[0][i + 1] == '0' && board[1][i + 1] == '0') {
            board[1][i] = board[0][i + 1] = board[1][i + 1] = 'X';
            return 1;
        }
        if (board[0][i] == '0' && board[1][i] == '0' && board[1][i + 1] == '0') {
            board[0][i] = board[1][i] = board[1][i + 1] = 'X';
            return 1;
        }

        return 0;
    };

    int n = board[0].size();
    int ans = 0;

    for (int i = 0; i < n - 1; i++)
        ans += f(i);

    cout << ans << "\n";
}
