/*
NAME: jbrenda1
LANG: C++
TASK: lamps
 */

#include "bits/stdc++.h"
using namespace std;
#define watch(x) cerr << (#x) << " = " << (x) << "\n"

int main()
{

  int N, C;
  ifstream fin("lamps.in");
  ofstream fout("lamps.out");

  fin >> N >> C;

  int groups[4] = { 0, 0, 0, 0 };

  auto group = [] (int lamp) -> int {
    if (lamp % 2 == 0 && (lamp - 1) % 3 == 0) {
      // 3k + 1
      return 0;
    } else if (lamp % 2 == 0) {
      return 1;
    } else if ((lamp - 1) % 3 == 0) {
      // 3k + 1
      return 2;
    }
    return 3;
  };

  auto read_lamps = [&] (int on) -> int {
    int lamp = 0;

    fin >> lamp;

    while (lamp != -1) {
      int g = group(lamp);
      if (groups[g] && groups[g] != on) {
        fout << "IMPOSSIBLE\n";
        return 1;
      }
      groups[g] = on;
      fin >> lamp;
    }

    return 0;
  };


  if (read_lamps(1) || read_lamps(-1)) {
    return 0;
  }

  vector<char> q { 15 }, dest {0}, nq;

  for (int i = 0; i < 4; i++) {

    int g = groups[i];
    int n = dest.size();

    if (g == 0) {
      vector<char> copy = dest;
      dest.insert(dest.end(), copy.begin(), copy.end());
    }

    if (g == 1 || g == 0) {
      for (int j = 0; j < n; j++) {
        dest[j] |= (1 << i);
      }
    }
  }

  int n = dest.size();
  if (dest.size()) {
    cerr << "destinations: ";
  }
  for (int i = 0; i < n; i++)
    cerr << to_string(dest[i]) << " \n"[i == n - 1];

  vector<char> masks { 15, 12, 3, 5 }, configs;
  set<char> seen;

  auto transition = [&] (char state, vector<char>& output) {

    for (auto mask : masks) if (seen.find(mask ^ state) == seen.end()) {
      auto x = mask ^ state;
      cerr << to_string(x) << "\n";
      output.push_back(x);
      seen.insert(x);
      if (find(dest.begin(), dest.end(), x) != dest.end()) {
        configs.push_back(x);
      }
    }
  };


  for (int depth = 1; q.size() && depth <= C; swap(q, nq), nq.clear(), ++depth) {
    for (auto x : q) {
      cerr << "node: " << to_string(x) << "\n";
      transition(x, nq);
    }
  }

  sort(configs.begin(), configs.end());

  n = configs.size();
  cerr << n << " configs: ";
  for (int i = 0; i < n; ++i)
    cerr << to_string(configs[i]) << " \n"[i == n - 1];

  vector<string> answers;

  auto answer = [&] (char config) {
    string ans = "";
    for (int i = 1; i <= N; i++) {
      auto g = group(i);
      if (config & (1 << g)) {
        ans += "1";
      } else {
        ans += "0";
      }
    }
    answers.emplace_back(ans);
  };

  bool zero = count(groups, groups + 4, 0) == 4 && C == 0;

  if (count(groups, groups + 4, 0) == 4 && C == 0) {
    for (int i = 1; i <= N; i++)
      fout << "1";
    fout << "\n";
  }

  if (!zero && configs.size() == 0) {
    fout << "IMPOSSIBLE\n";
    return 0;
  }

  for (auto config : configs) {
    answer(config);
  }

  sort(answers.begin(), answers.end());

  for (auto& ans : answers) {
    fout << ans << "\n";
  }

  return 0;
}

