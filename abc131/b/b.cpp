#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L;
  cin >> N >> L;
  int ans = 0;
  vector<int> vec;
  for (int i = 0; i < N; i++) {
    vec.push_back(L);
    L++;
  }
  for (int i = 0; i < N; i++) {
    ans += vec[i];
  }
  if (vec[0] > 0) {
    ans -= vec[0];
  } else if(vec[N - 1] < 0) {
    ans -= vec[N - 1];
  }
  cout << ans << endl;
}