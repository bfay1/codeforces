#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ifstream fin("joseph.in");
    ofstream fout("joseph.out");

    int n, k, ans = 0;
    fin >> n >> k;

    for (int i = 1; i <= n; i++)
        ans = (ans + k) % i;

    fout << ans + 1;
}
