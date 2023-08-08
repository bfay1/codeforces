#include <bits/stdc++.h>
using namespace std;
 
int bin_exp(long long a, long long b)
{
	int res = 1;
	while (b) {
		if (b & 1)
			res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
}
 
void print_bin(long long n, long long len)
{
	for (int i = (1 << len - 1); i; i >>= 1)
		cout << ((n & i) ? "1" : "0");
	cout << endl;
}
 
void dfs(long long n, long long a, vector<bool>& v)
{
	for (long long i = 0; i < n; i++) {
		long long t = a ^ (1 << i);
		if (!v[t]) {
			v[t] = true;
			print_bin(t, n);
			dfs(n, t, v);
		}
	}
}
 
int main()
{
	long long n, nexp;
	cin >> n;
	nexp = bin_exp(2, n);
	vector<bool> visited(nexp, false);
	visited[0] = true;	
	print_bin(0, n);
	dfs(n, 0, visited);
	return 0;
}
