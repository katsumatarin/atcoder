#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int kazu = 1;
  for (int i = 0; i < N; i++) {
    if (kazu * 2 < kazu + K) {
      kazu *= 2;
    } else {
      kazu += K;
    }
  }
  cout << kazu << endl;
}