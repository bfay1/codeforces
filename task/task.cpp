#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		for (auto c : a) cout << c << " ";
		cout << "\n";
	}
	return 0;
}	
