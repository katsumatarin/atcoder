#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  map<int, int> m;
  int K, A;
  for (int i = 0; i < N; i++) {
    cin >> K;
    for (int j = 0; j < K; j++) {
      cin >> A;
      m[A] += 1;
    }
  }
  int cnt = 0;
  for (auto& x:m) {
    if (x.second == N) {
      cnt++;
    }
  }
  cout << cnt << endl;
}