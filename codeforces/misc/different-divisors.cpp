#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MAXN 200005

bool is_prime[MAXN + 1];
vector<int> primes;
int n;

void sieve()
{
	for (int i = 0; i <= MAXN; i++)
		is_prime[i] = true;
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= MAXN; i++)
		if (is_prime[i] && i*i <= MAXN)
			for (int j = i*i; j <= MAXN; j += i)
				is_prime[j] = false;
	for (int i = 2; i <= MAXN; i++)
		if (is_prime[i])
			primes.push_back(i);
	n = primes.size();
}

void solve()
{
	int d;
	cin >> d;
	int p = 0, q = 0, i;
	for (i = d + 1; i <= MAXN && is_prime[i] == false; i++)
		;
	p = i;
	for (i = p + d; i <= MAXN && is_prime[i] == false; i++)
		;
	q = i;

	cout << min(p*p*p, p*q) << "\n";
}

signed main()
{
	int t;
	cin >> t;
	sieve();
	while (t--)
		solve();
}
