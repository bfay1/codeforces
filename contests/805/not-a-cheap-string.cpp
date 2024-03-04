#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int p, sum = 0;
    priority_queue<pair<int, int>> pq;
    set<int> indicies;

    string s;
    cin >> s;
    cin >> p;

    for (int i = 0; i < s.size(); i++) {
        int ord = s[i] - 'a' + 1;
        sum += ord;
        pq.push({ord, i});
    }

    while (p < sum) {
        auto [c, i] = pq.top();
        pq.pop();
        sum -= c;
        indicies.insert(i);
    }

    for (int i = 0; i < s.size(); i++)
        if (indicies.find(i) == indicies.end())
            cout << s[i];

    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
