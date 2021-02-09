#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;
  string S;
  vector<string> vec1;
  vector<string> vec2;
  for (int64_t i = 0; i < N; i++) {
    cin >> S;
    char c = S[0];
    if (c != '!') {
      vec1.push_back(S);
    } else {
      S.erase(0, 1);
      vec2.push_back(S);
    }
  }

  sort(vec1.begin(), vec1.end());
  sort(vec2.begin(), vec2.end());

  if (vec1.size() < vec2.size()) {
    for (int i = 0; i < vec1.size(); i++) {
      for (int j = 0; j < vec2.size(); j++) {
        if (vec1[i][0] == vec2[j][0]) {
          if (vec1[i] == vec2[j]) {
            cout << vec1[i] << endl;
            return 0;
          }
        } else {
          break;
        }
      }
    }
  } else {
    for (int i = 0; i < vec2.size(); i++) {
      for (int j = 0; j < vec1.size(); j++) {
        if (vec2[i][0] == vec1[j][0]) {
          if (vec2[i] == vec1[j]) {
            cout << vec2[i] << endl;
            return 0;
          }
        } else {
          break;
        }
      }
    }
  }

  cout << "satisfiable" << endl;

}