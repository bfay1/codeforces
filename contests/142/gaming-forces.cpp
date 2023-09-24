#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	
	while(t--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}		
		sort(a.begin(), a.end());
		int i = 0, ans = 0;
		while (i < n) {
			if (a[i] == 0) {
				i++;
				continue;
			}
			if (a[i] == 1 && i < n - 1) {
				a[i + 1]--;
			}
			ans++, i++;
		}	
		cout << ans << "\n";
	}
	
	return 0;
}	
