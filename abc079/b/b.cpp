#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int64_t first = 2, second = 1, ans = 0;
  if (N == 1) {
    cout << second << endl;
    return 0;
  } else {
    for (int i = 0; i < N - 1; i++) {
      ans = first + second;
      first = second;
      second = ans;
    }
  }
  cout << ans << endl;
}