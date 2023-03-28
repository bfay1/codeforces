/*
ID: jbrendan1
TASK: skidesign 
LANG: C++
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MAXN 1000

int n, a[MAXN + 1], vis[MAXN + 1];

int solve()
{
	int total = 0;
	sort(a + 1, a + n + 1);
	int l = 1, r = n;
	while (a[r] - a[l] > 17) {
		total += (a[r] - a[l] - 17)*(a[r] - a[l] - 17);
		r--;
		l++;
	}
	return total / 2;
}

signed main()
{
	ifstream fin("skidesign.in");
	
	fin >> n;
	for (int i = 1; i <= n; i++)
		fin >> a[i];

	fin.close();

	ofstream fout("skidesign.out");
	fout << solve() << "\n";
	fout.close();
	return 0;
}
