#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

const int mx = 1e18;

signed main()
{
    int t;
    cin >> t;

    auto q = [] (int x) {
	int d = 4*x - 3, sqd = -1;
	int sq = sqrtl(d);

	for (int i = max(0LL, sqrtl(d) - 5); i <= sqrtl(d) + 5; i++) {
	    if (i*i == d) {
		sqd = i;
		break;
	    }
	}

	return sqd % 2 && sqd > 3;
    };

    set<int> nums;

    for (int k = 2; k <= 1000000; k++) {
	int ins = k*k + k + 1;
	int inc = k*k*k;
	for (int j = 3; j <= 63; j++) {
	    if (mx < ins) {
		break;
	    }
	    nums.insert(ins);
	    ins += inc;
	    if (mx / k < inc) {
		break;
	    }
	    inc *= k;
	}
    }

    while (t--) {
	int n;
	cin >> n;

	if (n < 3) {
	    cout << "NO\n";
	    continue;
	} else if (q(n) || nums.count(n)) {
	    cout << "YES\n";
	} else {
	    cout << "NO\n";
	}
    }
}



