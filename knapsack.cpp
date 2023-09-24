#include <bits/stdc++.h>
using namespace std;

int main()
{
	ifstream fin("knapsack.in");
	ofstream fout("knapsack.out");

	int n, s;
	fin >> s >> n;

	vector<int> w(n), dp(s + 1);
	for (auto& item : w) {
		fin >> item;
	}

	for (const auto& weight : w) {
		for (int i = s; i >= 0; i--) {
			if (weight <= i) {
				dp[i] = max(dp[i], dp[i - weight] + weight);
			}
		}
	}

	fout << dp[s];
}
