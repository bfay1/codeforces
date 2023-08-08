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
 
int main()
{
	long long n;
	cin >> n;
	cout << bin_exp(2, n) - 1 << endl;
	stack<int> a;
	stack<int> b;
	stack<int> c;
	
	for (int i = n; i > 0; i--) {
		a.push(i);
	}
	
	if (n & 1) {
		while (c.size() != n) {
			if (!a.empty() && (c.empty() || a.top() < c.top())) {
				c.push(a.top());
				a.pop();
				cout << 1 << " " << 3 << endl;
			} else if (!c.empty() && (a.empty() || c.top() < a.top())) {
				a.push(c.top());
				c.pop();
				cout << 3 << " " << 1 << endl;
			}
			
			if (c.size() == n) return 0;
 
			if (!a.empty() && (b.empty() || a.top() < b.top())) {
				b.push(a.top());
				a.pop();
				cout << 1 << " " << 2 << endl;
			} else if (!b.empty() && (a.empty() || b.top() < a.top())) {
				a.push(b.top());
				b.pop();
				cout << 2 << " " << 1 << endl;
			}
			
			if (!b.empty() && (c.empty() || b.top() < c.top())) {
				c.push(b.top());
				b.pop();
				cout << 2 << " " << 3 << endl;
			} else if (!c.empty() && (b.empty() || c.top() < b.top())) {
				b.push(c.top());
				c.pop();
				cout << 3 << " " << 2 << endl;
			}
			if (c.size() == n) return 0;
		}
	}
 
	else {
		while (c.size() != n) {
			if (!a.empty() && (b.empty() || a.top() < b.top())) {
				b.push(a.top());
				a.pop();
				cout << 1 << " " << 2 << endl;
			} else if (!b.empty() && (a.empty() || b.top() < a.top())) {
				a.push(b.top());
				b.pop();
				cout << 2 << " " << 1 << endl;
			}
			
			if (!a.empty() && (c.empty() || a.top() < c.top())) {
				c.push(a.top());
				a.pop();
				cout << 1 << " " << 3 << endl;
			} else if (!c.empty() && (a.empty() || c.top() < a.top())) {
				a.push(c.top());
				c.pop();
				cout << 3 << " " << 1 << endl;
			}
			
			if (c.size() == n) return 0;
			
			if (!b.empty() && (c.empty() || b.top() < c.top())) {
				c.push(b.top());
				b.pop();
				cout << 2 << " " << 3 << endl;
			} else if (!c.empty() && (b.empty() || c.top() < b.top())) {
				b.push(c.top());
				c.pop();
				cout << 3 << " " << 2 << endl;
			}
			if (c.size() == n) return 0;
		}
	}
	return 0;
}
