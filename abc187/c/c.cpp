#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;

  string S;
  vector<string> vec1, vec2;
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
  vec1.erase(unique(vec1.begin(), vec1.end()), vec1.end());
  sort(vec2.begin(), vec2.end());
  vec2.erase(unique(vec2.begin(), vec2.end()), vec2.end());

  vec1.insert(vec1.end(), vec2.begin(), vec2.end());

  int vec1_size = vec1.size();
  sort(vec1.begin(), vec1.end());

  for(int i = 0; i < vec1_size - 1; i++) {
    if(vec1[i] == vec1[i+1]) {
      cout << vec1[i] << endl;
      return 0;
    }
  }
  cout << "satisfiable" << endl;
  return 0;
}