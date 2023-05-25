#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    string ans = "";
    for (int i = 0; i < n / 2; i++) {
	ans.push_back(i % 2 + 'a');
	ans.push_back(i % 2 + 'a');
    }

    if (n % 2)
	ans.push_back(ans.back() == 'a' ? 'b' : 'a');

    cout << ans << "\n";
}










