#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string W;
  vector<string> vec;
  cin >> W;
  vec.push_back(W);

  for (int i = 1; i < N; i++) {
    bool rules = true;

    string vec_end = vec.back();
    int vec_end_len = vec_end.length();

    cin >> W;
    vec.push_back(W);

    int vec_cnt = count(vec.begin(), vec.end(), W);
    if(vec_cnt != 1) {
      rules = false;
    }

    if(W[0] != vec_end[vec_end_len - 1]) {
      rules = false;
    }

    if(rules == false) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}