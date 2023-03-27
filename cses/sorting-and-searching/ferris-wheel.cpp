#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll p[200001];
 
int main()
{
	int n, x; cin >> n >> x;
	for (int i = 0; i < n; i++) cin >> p[i];
	sort(p, p + n);
	int l = 0, r = n - 1, res = 0;
	while (l <= r) {
		if (l == r || p[l] + p[r] <= x) l++;
		r--, res++;
	}
	cout << res << "\n";
	return 0;
}
