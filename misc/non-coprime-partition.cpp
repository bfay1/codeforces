#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 3) {
        return cout << "No\n", 0;
    }

    int sum = n * (n + 1) / 2;

    cout << "Yes\n";
    vector<int> odd, even;
    int osum = 0, esum = 0;

    int bad = -1;

    for (int i = 1; i <= n; i++) {
        if (i != 1 && sum % i == 0) {
            cout << "1 " << i << "\n";
            bad = i;
            break;
        }
    }

    cout << n - 1 << " ";

    for (int i = 1; i <= n; i++) {
        if (i != bad)
            cout << i << " ";
    }

    cout << "\n";

}
