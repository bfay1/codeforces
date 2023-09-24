#include <bits/stdc++.h>
using namespace std;
#define int long long
	
signed main()
{
	int n;
	cin >> n;	
	priority_queue<int> pq;
	
	int need = n;
	
	while (n--) {
		int x;
		cin >> x;
		pq.push(x);
		while (pq.top() == need) {
			x = pq.top();
			pq.pop();
			cout << x << (pq.empty() ?  :  );
			need--;
		}
		cout << n;
	}
}
