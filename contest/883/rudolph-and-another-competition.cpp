#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, h, ans = 1;
    cin >> n >> m >> h;
    pair<int, int> rud;
    vector<int> a(m);

    auto f = [h] (vector<int>& v) {
	int sum = 0, i = 0, penalty = 0;
	sort(v.begin(), v.end());
	while (i < v.size() && sum + v[i] <= h) {
	    if (h < sum + v[i]) {
		break;
	    }
	    sum += v[i];
	    penalty += sum;
	    i++;
	}
	return make_pair(-i, penalty);
    };


    for (int i = 0; i < n; i++) {
	for (auto& x : a) {
	    cin >> x;
	}
	if (i == 0) {
	    rud = f(a);
	} else if (f(a) < rud) {
	    ans++;
	}
    }

    cout << ans << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--) {
	solve();
    }
}



