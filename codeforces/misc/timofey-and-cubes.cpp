#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a) {
	cin >> x;
    }

    for (int i = 0; i < n / 2; i++) {
	if (i % 2 == 0) {
	    swap(a[i], a[n - i - 1]);
	}
    }

    for (int i = 0; i < n; i++) {
	cout << a[i] << " \n"[i == n - 1];
    }
}
