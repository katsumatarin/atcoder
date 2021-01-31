#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int h = 0;
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    cin >> h;
    if (h >= K) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}