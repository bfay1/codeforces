#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, s;
	cin >> s >> n;

	vector<int> w(n), dp(s + 1);
	for (auto& item : w) {
		cin >> item;
	}

	for (const auto& weight : w) {
		for (int i = s; i >= 0; i--) {
			if (weight <= i) {
				dp[i] = max(dp[i], dp[i - weight] + weight);
			}
		}
	}

	cout << dp[s];
}
