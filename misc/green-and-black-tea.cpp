#include <bits/stdc++.h>
using namespace std;

#define watch(x) cerr << (#x) << ": " << x << "\n"

int main()
{
    int n, k, a, b;
    char achr = 'G', bchr = 'B';
    cin >> n >> k >> a >> b;

    if (a < b)
        swap(a, b), swap(achr, bchr);

    auto printa = [&] (int amt) { while (amt--) cout << achr; };
    auto printb = [&] (int amt, int& rem) { if (rem > 0) amt++; while (amt--) cout << bchr; rem--; };

    int z = 0;

    if (a <= k) {
        printa(a);
        printb(b, z);
        cout << "\n";
        return 0;
    }

    int agrps = a / k;
    int arem = a % k;
    int bamt = b / agrps;
    int brem = b % agrps;

    if (bamt == 0 && a > k && brem < (agrps - 1 + (arem > 0)))
        return cout << "NO\n", 0;

    while (agrps--)
        printa(k), printb(bamt, brem);

    printa(arem);

    cout << "\n";

}
