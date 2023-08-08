#include <bits/stdc++.h>
using namespace std;
#define int long long

#define MAXN 1000
#define MAXSUM (MAXN * 1000 + 5)

int coins[MAXN];
int made[MAXSUM];

signed main()
{
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> coins[i];
		sum += coins[i];
	}
	
	made[0] = -1;

	sort(coins, coins + n);
	int num = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = coins[0]; j <= sum; j++) {
			if (made[j] && made[j] < i && !made[j + coins[i]]) {
				num++;
				made[j + coins[i]] = i;
			}
		}
	}
	int i = coins[1];
	cout << num << "\n";
	for (int i = coins[1]; i <= sum; i++)
		if (made[i])
			cout << i << " \n"[i == sum];
	if (i < sum)
		cout << "\n";
}
