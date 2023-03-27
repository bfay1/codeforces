#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n;
	cin >> n;
	if (n == 2 || n == 3) cout << "NO SOLUTION";
	else {
		for (int i = 2 - (n & 1); i <= n; i += 2) cout << i << " ";
		for (int i = 1 + (n & 1); i <= n; i += 2) cout << i << " ";
	}
	return 0;
}
