#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    
    function <void(int, int)> print = [&] (int cols, int parity) {
  
	if (parity == 0) {
	    for (int i = 0; i < cols / 2; i++) {
		if (i % 2 == 0)
		    cout << "1 0";
		else
		    cout << "0 1";
		cout << " \n"[i == (cols / 2) - 1];
	    }
	    for (int i = 0; i < cols / 2; i++) {
		if (i % 2)
		    cout << "1 0";
		else
		    cout << "0 1";
		cout << " \n"[i == (cols / 2) - 1];
	    }
	} else {
	    for (int i = 0; i < cols / 2; i++) {
		if (i % 2)
		    cout << "1 0";
		else
		    cout << "0 1";
		cout << " \n"[i == (cols / 2) - 1];
	    }
	    for (int i = 0; i < cols / 2; i++) {
		if (i % 2 == 0)
		    cout << "1 0";
		else
		    cout << "0 1";
		cout << " \n"[i == (cols / 2) - 1];
	    }
	}
    };

    for (int i = 0; i < (n / 2); i++)
	print(m, (i % 2));
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}
