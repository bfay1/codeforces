#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    for (int i = 1; i <= n; i++) {
	for (int j = 0; j < i; j++) {
	    int x;
	    cin >> x;
	    a[i - 1].push_back(x);
	}
    }

    for (int row = n - 1; row >= 1; row--) {
	for (int i = 0; i < row; i++) {
	    a[row - 1][i] += max(a[row][i], a[row][i + 1]);
	}
    }

    cout << a[0][0] << "\n";
}
