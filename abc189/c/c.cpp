#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  for (int i = 0; i < N; i++) cin >> vec.at(i);
  int ans = 0;
  for (int l = 0; l < N; l++) {
    int x = vec[l];
    for (int r = l; r < N; r++) {
      x = min(x, vec[r]);
      ans = max(ans, x*(r-l+1));
    }
  }
  cout << ans;
}