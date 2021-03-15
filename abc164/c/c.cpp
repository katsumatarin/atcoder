#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  vector<string> vec;
  for(int i = 0; i < N; i++) {
    cin >> S;
    vec.push_back(S);
  }

  sort(vec.begin(), vec.end());
  vec.erase(unique(vec.begin(), vec.end()), vec.end());

  int ans = vec.size();
  cout << ans << endl;
}