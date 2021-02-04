#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  int P;
  vector<tuple<string, int, int>> tuple_vec;
  for (int i = 0; i < N; i++) {
    cin >> S >> P;
    tuple_vec.emplace_back(S, P * - 1, i + 1);
  }
  sort(tuple_vec.begin(), tuple_vec.end());
  for (int i = 0; i < N; i++) {
    cout << get<2>(tuple_vec[i]) << endl;
  }
}