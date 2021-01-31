#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S, D;
  cin >> N >> S >> D;
  int X = 0;
  int Y = 0;
  for (int i = 0; i < N; i++) {
    cin >> X >> Y;
    if (X < S && Y > D) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}