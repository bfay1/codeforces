#include <bits/stdc++.h>
using namespace std;
#define int long long

bool is_prime[1005];

void solve()
{
    int n, m;
    cin >> n >> m;
    if (!is_prime[m]) {
	for (int i = 0; i < n; i++) {
	    for (int j = 1; j <= m; j++) {
		cout << m*i + j << " \n"[j == m];
	    }
	}
    } else {
	vector<int> order;
	vector<int> order1;
	vector<int> order2;
	for (int i = 1; i <= n; i += 2)
	    order1.push_back(i);

	for (int i = 2; i <= n; i += 2)
	    order2.push_back(i);
	if (n == 4) {
	    for (auto x : order2)
		order.push_back(x);
	    for (auto x : order1)
		order.push_back(x);
	} else {
	    for (auto x : order1)
		order.push_back(x);
	    for (auto x : order2)
		order.push_back(x);
	}
	for (auto i : order) {
	    for (int j = 1; j <= m; j++) {
		cout << m*(i - 1) + j << " \n"[j == m]; 
	    }
	}
    }
    cout << "\n";
}

signed main()
{

    for (int i = 2; i <= 1000; i++)
	is_prime[i] = true;
    for (int i = 2; i <= 1000; i++) {
	if (is_prime[i])
	    for (int j = 2*i; j <= 1000; j += i)
		is_prime[j] = false;
    }

    int t;
    cin >> t;
    while (t--)
	solve();
}
