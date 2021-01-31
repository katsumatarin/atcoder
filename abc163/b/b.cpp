#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int cnt = 0;
  int A = 0;
  for (int i = 0; i < M; i++) {
    cin >> A;
    cnt += A;
  }
  int ans = 0;
  if (cnt <= N) {
    ans = N - cnt;
  } else {
    ans = -1;
  }
  cout << ans << endl;
}