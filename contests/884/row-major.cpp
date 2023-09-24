#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

signed main()
{

    int t;
    cin >> t;

    while (t--) {
	int n, period = 2;
	cin >> n;

	if (n % 2 == 0) {
	    while (n % period == 0) {
		period++;
	    }
	}

	for (int i = 0; i < n; i++) {
	    cout << (char) ('a' + (i % period));
	}

	cout << "\n";

    }
}



