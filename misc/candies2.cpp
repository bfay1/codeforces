#include <bits/stdc++.h>
using namespace std;
#define int long long

#define K 25LL
#define MAXN 100005LL

int st[K + 1][MAXN];

signed main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a)
	cin >> x;


    copy(a.begin(), a.end(), st[0]);

    for (int i = 1; i <= K; i++)
	for (int j = 0; j + (1 << i) <= n; j++)
	    st[i][j] = st[i - 1][j] + st[i - 1][j + (1 << (i - 1))];

    int q;
    cin >> q;

    function <int(int, int)> query = [&] (int l, int r) {
	int sum = 0;
	for (int i = 0; i <= K; i++) {
	    if ((1 << i) <= r - l + 1) {
		sum += st[i][l];
		l += (1 << i);
	    }
	}
	return sum;
    };

    while (q--) {
	int l, r;
	cin >> l >> r;
	cout << query(l, r) / 10 << "\n";
    }
}










