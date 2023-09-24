#include <bits/stdc++.h>
using namespace std;
#define int long long
 
#define MAXN 200005
int ans[MAXN];

signed main()
{
	int n;
	cin >> n;
	int num = 0;
	for (int i = 0; i <= n; i++)
		ans[i] = 1;
	for (int i = 2; i <= n; i++) {
		if (ans[i] == 1 && !vis[i]) {
			num++;
			for (int j = i; j < MAXN; j += i) {
				if (!vis[j]) {
					ans[j] = num;
					vis[j] = true;
				}
			}
		}
	}
 
	for (int i = 2; i <= n; i++)
		cout << ans[i] << " \n"[i == n];
}
