#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n, c; cin >> n >> c;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        pq.push(i + x);
    }
 
    int ans = 0;
    
    while (pq.empty() == false && c >= pq.top()) {
        ans++;
        c -= pq.top();
        pq.pop();
    }
 
    cout << ans << "\n";
}
 
signed main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
