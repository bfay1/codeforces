#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
	int n;
	cin >> n;
	vector<int> a(n * n);
	iota(a.begin(), a.end(), 1);
	vector<vector<int>> ans(n);
	int ptr = n*n;
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			while (j < n)
				ans[j++].push_back(ptr--);
		} else {
			while (j > 0)
				ans[--j].push_back(ptr--);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << ans[i][j] << " \n"[j == n - 1];
		}
	}
}
