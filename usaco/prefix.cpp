/*
NAME: jbrenda1
LANG: C++
TASK: lamps
 */

#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr << (#x) << " = " << (x) << "\n"

using ll = long long;



/*
 *  reading input
 */

void read_primitives(ifstream& fin, set<string>& primitives)
{
  string s = "";

  while (true) {
    fin >> s;
    if (s == ".") {
      break;
    }
    primitives.emplace(s);
  }

}

string read_sequence(ifstream& fin)
{
  string sequence;
  fin >> sequence;
  return sequence;
}

/*
 * Trie
 */


int main()
{

  ifstream fin("prefix.in");
  ofstream fout("prefix.out");

  set<string> primitives;

  // reading input
  read_primitives(fin, primitives);
  string sequence = read_sequence(fin);

  int n = sequence.size();
  vector<int> dp(n + 1); dp[0] = true;
  for (int i = 1; i <= n; i++) {
    // if preceding index is a valid prefix
    // mark all the following valid prefixes
    if (dp[i - 1] == true) {
      string cur = "";
      for (int j = i - 1; j < n; j++) {
        cur += sequence[i];
        if (primitives.find(cur) != primitives.end()) {
          int m = cur.size();
          dp[i - 1]
        }
      }
    }
  }

  return 0;

}
