#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  int cnt;
  for (int i = 0; i < N; i++) {
    cin >> vec[i];
  }
  int ans = 0;
  for (int i = 0; i < N; i++) {
    bool is_max =true;
    for (int j = 0; j < i; j++) {
      if (vec[j] > vec[i]) {
        is_max = false;
        break;
      }
    }
    if (is_max) {
      ans++;
    }
  }
  cout << ans << endl;
}